/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:17:30 by ede-alme          #+#    #+#             */
/*   Updated: 2023/04/09 19:16:54 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#define MAX_INT 2147483647

PmergeMe::PmergeMe(char** args) {
    (void)args;
    for (int i = 0; args[i]; i++) {
        _intVector.push_back(std::strtol(args[i], NULL, 10));
        _intDeque.push_back(std::strtol(args[i], NULL, 10));
    }
    std::cout << "ARGS INSERTION: \033[0;32m[OK]\033[0m" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    for (size_t i = 0; i < copy._intVector.size(); i++) {
        _intVector.push_back(copy._intVector[i]);
    }
    for (size_t j = 0; j < copy._intDeque.size(); j++) {
        _intDeque.push_back(copy._intDeque[j]);
    }
}

PmergeMe::~PmergeMe()
{
}

bool PmergeMe::invalidArgs(char **args, int argc)
{
    for (size_t i = 0; i < (size_t)argc; i++) {//check empty arguments
        if (!args[i][0]) {
            std::cout << "ARGS VALIDATION: \033[0;31m[KO]\033[0m \033[0;31m" << i + 1 << "°\033[0m argument empty." << std::endl;
            return true;
        }
    }
    for (size_t i = 0; args[i]; i++) {
        for (size_t j = 0; args[i][j]; j++) {//check if each argument is digit string
            if (!std::isdigit(args[i][j])) {
                std::cout << "ARGS VALIDATION: \033[0;31m[KO]\033[0m \"\033[0;31m" << args[i] << "\033[0m\" argument has a syntax error." << std::endl;
                return true;
            }
        }
        for (int j = i - 1; j >= 0; j--) {//check duplicate numbers
            if (std::string(args[i]) == std::string(args[j])) {
                std::cout << "ARGS VALIDATION: \033[0;31m[KO]\033[0m \"\033[0;31m" << args[i] << "\033[0m\" arguments is duplicated." << std::endl;
                return true;
            }
        }
        if (std::strtol(args[i], NULL, 10) > MAX_INT) {//check max int numbers
            std::cout << "ARGS VALIDATION: \033[0;31m[KO]\033[0m \"\033[0;31m" << args[i] << "\033[0m\" argument exceed the maximum value of an integer." << std::endl;
            return true;
        }
    }
    std::cout << "ARGS VALIDATION: \033[0;32m[OK]\033[0m" << std::endl;//arguments OK
    return false;
}

template<typename T>
T PmergeMe::mergeShort(T container)
{
    T    right;
    T    left;
    T    result;
    if (container.size() >= 3) {
        for (size_t i = 0; i < (container.size() / 2); i++) {
            left.push_back(container[i]);
        }
        for (size_t i = (container.size() / 2); i < container.size(); i++) {
            right.push_back(container[i]);
        }
        right = mergeShort(right);
        left = mergeShort(left);
    }
    if (container.size() == 2) {
        if (container[0] > container[1]) {
            int temp = container[0];
            container[0] = container[1];
            container[1] = temp;
        }
    }
    else if (container.size() >= 3) {
        while (right.size() || left.size()) {
            if (right.size() && left.size()) {
                if (right[0] < left[0]) {
                    result.push_back(right[0]);
                    right.erase(right.begin());
                }
                else {
                    result.push_back(left[0]);
                    left.erase(left.begin());
                }
            }
            else if (right.size()) {
                result.push_back(right[0]);
                right.erase(right.begin());
            }
            else {
                result.push_back(left[0]);
                left.erase(left.begin());
            }
        }
    }
    if (container.size() < 3)
        return container;
    return result;
}

void PmergeMe::startShort() {
    double time_vector, time_deque;
    struct timeval start_time, end_time;

    //Before short numbers:
    std::cout << "Before:\t";
    for (size_t i = 0; _intVector[i]; i++) {
        std::cout << " " << _intVector[i];
    }
    std::cout << std::endl;

    //starting count vector merge short
    gettimeofday(&start_time, NULL);
    _intVector = mergeShort(_intVector);
    gettimeofday(&end_time, NULL);
    time_vector = (end_time.tv_sec - start_time.tv_sec) * 1000.0; // seconds to milliseconds
    time_vector += (end_time.tv_usec - start_time.tv_usec) / 1000.0; // microseconds to milliseconds

    //After short numbers:
    std::cout << "After:\t";
    for (size_t i = 0; _intVector[i]; i++) {
        std::cout << " " << _intVector[i];
    }
    std::cout << std::endl;

    //starting count deque merge short
    gettimeofday(&start_time, NULL);
    _intDeque = mergeShort(_intDeque);
    gettimeofday(&end_time, NULL);
    time_deque = (end_time.tv_sec - start_time.tv_sec) * 1000.0; // seconds to milliseconds
    time_deque += (end_time.tv_usec - start_time.tv_usec) / 1000.0; // microseconds to milliseconds


    //Result time of vector short:
    std::cout << "Time to process a range of " << _intVector.size() << " elements with std::vector : " << std::setprecision(10) << time_vector << std::endl;
     //Result time of deque short:
    std::cout << "Time to process a range of " << _intDeque.size() << " elements with std::deque : " << std::setprecision(10) << time_deque << std::endl;

}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
    if (this != &rhs) {
        _intVector.clear();
        for (size_t i = 0; i < rhs._intVector.size(); i++) {
            _intVector.push_back(rhs._intVector[i]);
        }
        _intDeque.clear();
        for (size_t j = 0; j < rhs._intDeque.size(); j++) {
            _intDeque.push_back(rhs._intDeque[j]);
        }
    }
    return *this;
}
