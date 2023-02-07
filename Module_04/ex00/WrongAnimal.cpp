/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:50:34 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 17:03:14 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */) {
    std::cout << "WrongAnimal Constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor called!" << std::endl;
}

void    WrongAnimal::makeSound() const {
    std::cout << "A WrongAnimal Sound!" << std::endl;
}

std::string WrongAnimal::getType() const{
    return "Wrong Animal";
}
