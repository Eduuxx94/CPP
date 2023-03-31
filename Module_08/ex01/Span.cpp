/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:27:06 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/11 20:09:34 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size): _elem(0), _N(size) {
    std::cout << "Span started with maximum size rule of: " << size << std::endl;
}

Span::~Span() {
}

void Span::addNumber(const int value) {
    if (_elem.size() >= _N) {
        throw std::out_of_range("\033[0;31mCan't add more numbers!\033[0m");
    }
    else {
        for (std::vector<int>::iterator it = _elem.begin(); it != _elem.end(); *it++) {
            if (*it == value) {
                throw  std::invalid_argument("\033[0;31mYou can't add the same value twice!\033[0m");
            }
        }
        _elem.push_back(value);
        std::cout << "A value was insert: " << value << std::endl;
    }
}

unsigned int Span::shortestSpan() {
    std::vector<int>    temp = _elem;
    unsigned int    shortest = 4294967295;

    std::sort(temp.begin(), temp.end());
    for (std::vector<int>::iterator it = temp.begin(); (it + 1) != temp.end(); *(it++)) {
        if (*it < *(it + 1) && static_cast<unsigned int>(*(it + 1) - *it) < shortest) {
            shortest = *(it + 1) - *it;
        }
        else if (*it > (*it + 1) && static_cast<unsigned int>(*it - (*it + 1)) > shortest) {
            shortest = *it - *(it + 1);
        }
    }
    return shortest;
}

unsigned int Span::longestSpan() {
    return *(std::max_element(_elem.begin(), _elem.end())) - *(std::min_element(_elem.begin(), _elem.end()));
}

void Span::fillSpan(unsigned int size) {
    if (size > _N) {
        throw std::out_of_range("\033[0;31mSize to fill out of bound!\033[0m");
    }
    std::srand(std::time(0));
    this->_elem.resize(size);
    std::generate(_elem.begin(), _elem.end(), rand);
}

int    Span::operator[](const unsigned int index) {
    if (index >= _N) {
        throw std::out_of_range("\033[0;31mIndex is out of bounds\033[0m");
    }
    return _elem[index];
}