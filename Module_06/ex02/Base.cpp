/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:48:37 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/05 13:01:40 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <ctime>

Base::Base(/* args */)
{
}

Base::~Base()
{
}

Base *Base::generate(void)
{
    std::srand(std::time(0));
    switch (std::rand() % 3)
    {
    case 0:
        std::cout << "A was generated!" << std::endl;
        return new A;
    case 1:
        std::cout << "B was generated!" << std::endl;
        return new B;
    default:
        std::cout << "C was generated!" << std::endl;
        return new C;
    }
    return NULL;
}

/*
The first version of the identify function uses dynamic_cast with a pointer argument
to test if the object is of a certain type. This is simpler and more concise, but it
can be less robust if the object passed to it is not actually a Base object of any of
the derived types A, B, or C.

The second version of the identify function uses dynamic_cast with a reference argument
and nested try and catch blocks to test if the object is of a certain type. This is
more verbose, but it is also more robust and defensive. It correctly reports that the
object is not of any of the expected types if it is not actually a Base object of any
of the derived types A, B, or C.
*/

void Base::identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "I am *A type!" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "I am *B type!" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "I am *C type!" << std::endl;
    else
        std::cout << "I'm not a *Base type!" << std::endl;
}

void Base::identify(Base &p)
{
    try {
        dynamic_cast<A&>(p);
        std::cout << "I am &A type!" << std::endl;
    }
    catch (const std::exception& e) {
        try {
            dynamic_cast<B&>(p);
            std::cout << "I am &B type!" << std::endl;
        }
        catch (const std::exception& e){
            try {
                dynamic_cast<C&>(p);
                std::cout << "I am &C type!" << std::endl;
            }
            catch (const std::exception& e){
                std::cout << "I'm not a &Base type!" << std::endl;
            }
        }
    }
}
