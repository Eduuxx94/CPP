/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:41 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 17:52:13 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
    std::cout << "Dog default constructor called!" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy): AAnimal() {
    std::cout << "Dog default constructor called!" << std::endl;
    type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << "WOOF" << std::endl;
}

void Dog::telepathy(void) const {
    brain->showIdeas();
}

void Dog::train(std::string idea) {
    brain->setIdea(idea);
}

Dog &Dog::operator=(const Dog &rhs) {
    this->type = rhs.type;
    this->brain = rhs.brain;
    return *this;
}
