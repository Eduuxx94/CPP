/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:26:27 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/06 15:11:07 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>
#include <string>

class ScalarConverter {
private:
    /* data */
    static int getType(const std::string& str);
public:
    ScalarConverter(/* args */);
    ScalarConverter(const ScalarConverter& copy);
    ~ScalarConverter();
    static void convert(const std::string& str);
    ScalarConverter&    operator=(const ScalarConverter& rhs);
};

#endif
