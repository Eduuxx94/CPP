/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:27:17 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/11 20:09:37 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

class Span
{
private:
    std::vector<int>    _elem;
    const unsigned int  _N;
public:
    Span(unsigned int size);
    ~Span();
    void            addNumber(const int value);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();
    void     fillSpan(unsigned int size);
    int    operator[](const unsigned int index);
};

#endif
