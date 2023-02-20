/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:43 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 16:15:41 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
    Brain   *brain;
public:
    Dog(void);
    Dog(const Dog& copy);
    ~Dog();
    void    makeSound(void) const;
    void    telepathy(void) const;
    void    train(std::string idea);
    Dog&    operator=(const Dog& rhs);
};

#endif