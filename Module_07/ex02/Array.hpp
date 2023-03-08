/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:25:57 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/07 22:48:37 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
private:
    unsigned int    _n;
    T*              _array;
public:
    Array(): _n(0), _array(new T[0]) {
        std::cout << "Array[" << 0 << "] created!" << std::endl;
    };
    Array(unsigned int n): _n(n), _array(new T[n]) {
        std::cout << "Array[" << _n << "] created!" << std::endl;
    };
    Array(const Array& copy): _n(copy._n), _array(new T[copy._n]) {
        for (unsigned int i = 0; i < copy._n; i++) {
            this->_array[i] = copy._array[i];
        }
    };
    ~Array() { delete[] _array; };
    unsigned int    size() {
        return this->_n;
    };

    Array&  operator=(const Array& rhs) {
        if (*this != rhs) {
            delete _array;
            _array = new T[rhs._n];
            this->_n = rhs._n;
            for (int i = 0; i < _n; i++) {
                _array[i] = rhs._array[i];
            }
        }
        return *this;
    };
    T&    operator[](const unsigned int index) {
        if (index >= _n) {
            throw std::out_of_range("\033[0;31mIndex is out of bounds\033[0m");
        }
        return this->_array[index];
    }
};

#endif
