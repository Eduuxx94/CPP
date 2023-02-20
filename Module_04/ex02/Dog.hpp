/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:43 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 17:49:40 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
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