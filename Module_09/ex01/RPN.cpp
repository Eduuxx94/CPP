/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:15:55 by ede-alme          #+#    #+#             */
/*   Updated: 2023/04/08 14:43:19 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(/* args */)
{
}

RPN::RPN(const std::string& str) {
    for (int i = 0; str[i]; i++) {
        if (std::isdigit(str[i])) {
            _numbers.push(str[i] - '0');
        }
        else if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*') {// if == (+ - / *)
            if (_numbers.size() < 2) {
                throw std::runtime_error("\033[0;31mError: The input expression is invalid or has a syntax error.\033[0m");
            }
            else {
                int x = _numbers.top();
                _numbers.pop();
                int y = _numbers.top();
                _numbers.pop();
                _numbers.push(ft_calc(y, x, str[i]));
            }
        }
        else {
            if (str[i] == ' ') {
                continue ;
            }
            throw std::runtime_error("\033[0;31mError: Invalid character.\033[0m");
        }
        if (!str[i + 1] || str[i + 1] == ' ') {
            if (str[i + 1] == ' ') {
                i++;
            }
            continue ;
        }
        else {
            throw std::runtime_error("\033[0;31mError: Arguments should be separated by a space character.\033[0m");
        }
    }
}

RPN::~RPN()
{
}

int RPN::getRPN() {
    if (_numbers.empty())
        return 0;
    return _numbers.top();
}

int RPN::ft_calc(int x, int y, char oper)
{
    if (oper == '+') {
        return x + y;
    }
    else if (oper == '-') {
        return x - y;
    }
    else if (oper == '/') {
        return x / y;
    }
    else if (oper == '*') {
        return x * y;
    }
    return 0;
}
