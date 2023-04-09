/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:17:43 by ede-alme          #+#    #+#             */
/*   Updated: 2023/04/09 18:04:26 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <iomanip>
#include <sys/time.h>

class PmergeMe
{
private:
    std::vector<int>    _intVector;
    std::deque<int>     _intDeque;
public:
    PmergeMe(char** args);
    PmergeMe(const PmergeMe& copy);
    ~PmergeMe();
    
    static bool                 invalidArgs(char **args, int argc);
    template<typename T>
    T            mergeShort(T container);
    void                        startShort();

    PmergeMe& operator=(const PmergeMe& rhs);
};
