/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:48:47 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/04 21:15:55 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>

class Base
{
private:
    /* data */
public:
    Base(/* args */);
    virtual ~Base();
    static Base*    generate(void);
    void    identify(Base* p);
    void    identify(Base& p);
};

class A : public Base { };
class B : public Base { };
class C : public Base { };

#endif
