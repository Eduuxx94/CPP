/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:34 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 17:26:13 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
private:
    /* data */
protected:
    std::string type;
public:
    Animal(/* args */);
    Animal(std::string type);
    Animal(const Animal& copy);
    virtual ~Animal();
    virtual void    makeSound() const;
    std::string getType(void) const;
    Animal& operator=(const Animal& rhs);
};

#endif