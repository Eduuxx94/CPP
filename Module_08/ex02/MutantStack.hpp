/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:20:15 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/11 23:35:14 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template<typename T>
class MutantStack: public std::stack<T>
{
private:
    /* data */
public:
    MutantStack(/* args */);
    MutantStack(const MutantStack& copy);
    ~MutantStack();

    MutantStack&    operator=(const MutantStack& rhs);
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    typename MutantStack<T>::container_type::iterator    begin(void);
    typename MutantStack<T>::container_type::iterator    end(void);
};

template< typename T>
MutantStack<T>::MutantStack(void) {
    
}

template< typename T>
MutantStack<T>::MutantStack( MutantStack const & src) {
    *this = src;
}

template< typename T>
MutantStack<T>::~MutantStack() {
    
}

template< typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const & rhs) {
	if (this != &rhs)
        std::stack<T>::operator=(rhs);

    return *this;
}

template< typename T>
typename MutantStack<T>::container_type::iterator    MutantStack<T>::begin(void)
{
    return this->c.begin();
}

template< typename T>
typename MutantStack<T>::container_type::iterator    MutantStack<T>::end(void)
{
    return this->c.end();
}

#endif
