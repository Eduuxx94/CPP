/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:16:09 by ede-alme          #+#    #+#             */
/*   Updated: 2023/04/08 14:35:51 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cctype>

class RPN
{
private:
    std::stack<int>     _numbers;
public:
    RPN(/* args */);
    RPN(const std::string& str);
    ~RPN();
    int     getRPN();
    static  int ft_calc(int x, int y, char oper);
};

#endif
