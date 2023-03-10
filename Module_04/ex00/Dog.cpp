/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:41 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 15:52:06 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
    std::cout << "Dog default constructor called!" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &copy): Animal() {
    std::cout << "Dog default constructor called!" << std::endl;
    type = copy.type;
}

Dog::~Dog(){
    std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << "BARK" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    this->type = rhs.type;
    return *this;
}
