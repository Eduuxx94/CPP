/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:36 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 17:52:25 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat default constructor called!" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &copy): AAnimal() {
    std::cout << "Cat copy constructor called!" << std::endl;
    type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "MEOW" << std::endl;
}

void Cat::telepathy(void) const {
    brain->showIdeas();
}

void Cat::train(std::string idea) {
    brain->setIdea(idea);
}

Cat &Cat::operator=(const Cat &rhs) {
    type = rhs.type;
    return *this;
}
