/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:26:09 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/03 01:26:49 by ede-alme         ###   ########.fr       */
/*                                                                */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

enum Types {
    UNKNOW = 0,
    CHAR = 1,
    INT = 2,
    FLOAT = 3,
    DOUBLE = 4
};

int ScalarConverter::getType(const std::string &str)
{
    int f_count = 0;
    int dot_count = 0;

    if (!str.length()) {
        return UNKNOW;
    }
    if (str.length() == 1) {
        if (std::isdigit(str[0]))
            return (INT);
        if (std::isprint(str[0]))
            return (CHAR);
        return (UNKNOW);
    }
    for (int i = 0; str[i]; i++) {
        if (str[i] == 'f') {
            f_count++;
        }
    }
    for (int i = 0; str[i]; i++) {
        if (str[i] == '.') {
            dot_count++;
        }
    }
    if (dot_count == 1 && f_count == 1 && str.length() >= 4 && str[str.length() - 1] == 'f' && str[0] != '.') {//check if str is FLOAT TYPE
        for (int i = 0; str[i]; i++) {
            if (i == 0 && str[i] == '-') {//check if number is negative, if is ignore and keep algorithm
                continue ;
            }
            if (str[i] == '.' && (!std::isdigit(str[i - 1]) || !std::isdigit(str[i + 1]))) {//check if is a digit before and after dot '.'
                return UNKNOW;
            }
            if (!std::isdigit(str[i]) && str[i] != 'f' && str[i] != '.') {//check if is another character not permited!
                return UNKNOW;
            }
        }
        return FLOAT;
    }
    if (dot_count == 1 && str.length() >= 3 && str[0] != '.' && str[str.length() - 1] != '.') {
        for (int i = 0; str[i]; i++) {
            if (std::isprint(str[i]) && !std::isdigit(str[i]) && str[i] != '.') {
                return UNKNOW;
            }
            if (i == 0 && str[i] == '-') {//check if number is negative, if is ignore and keep algorithm
                continue ;
            }
            if (str[i] == '.' && (!std::isdigit(str[i - 1]) || !std::isdigit(str[i + 1]))) {//check if is a digit before and after dot '.'
                return UNKNOW;
            }
            if (!std::isdigit(str[i]) && str[i] != 'f' && str[i] != '.') {//check if is another character not permited!
                return UNKNOW;
            }
        }
        return DOUBLE;
    }
    for (int i = 0; str[i]; i++) {
        if (i == 0 && str[i] == '-') {//check if number is negative, if is ignore and keep algorithm
            continue ;
        }
        if (!std::isdigit(str[i])) {
            break;
        }
        if (!str[i + 1]) {
            return INT;
        }
    }
    return UNKNOW;
}

ScalarConverter::ScalarConverter(/* args */) {
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
    (void)copy;
}

ScalarConverter::~ScalarConverter() {
}

void ScalarConverter::convert(const std::string& str) {
    size_t  res = getType(str);
    std::cout.precision(1);

    if (!res) {
        std::cout << "The input is unknow!" << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else {
        if (res == 1) {
            std::cout << "The input is a char!" << std::endl;
            std::cout << "char: '" << static_cast<char>(str[0]) << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
            std::cout << "float: " << std::fixed << static_cast<float>(str[0]) << "f" << std::endl;
            std::cout << "double: " << std::fixed << static_cast<double>(str[0]) << std::endl;
            return ;
        }
        if (res == 2)
            std::cout << "The input is a int!" << std::endl;
        if (res == 3)
            std::cout << "The input is a float!" << std::endl;
        if (res == 4)
            std::cout << "The input is a double!" << std::endl;

        if (atoi(str.c_str()) >= 32 && atoi(str.c_str()) <= 126) {
            std::cout << "char: '" << static_cast<char>(atoi(str.c_str())) << "'" << std::endl;
        }
        else {
            std::cout << "char: Non displayable" << std::endl;
        }
        std::cout << "int: " << static_cast<int>(atoi(str.c_str())) << std::endl;
        std::cout << "float: " << std::fixed << static_cast<float>(atof(str.c_str())) << "f" << std::endl;
        std::cout << "double: " << std::fixed << static_cast<double>(atof(str.c_str())) << std::endl;
    }  
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
    (void)rhs;
    return *this;
}
