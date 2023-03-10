/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:43 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/17 17:38:32 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: public Animal
{
private:
    /* data */
public:
    Dog(void);
    Dog(const Dog& copy);
    ~Dog();
    void    makeSound() const;
    Dog&    operator=(const Dog& rhs);
};

#endif