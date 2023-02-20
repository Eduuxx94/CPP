/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:56:15 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/20 12:38:39 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */) {
    std::cout << "WrongCat default constructor called!" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal() {
    std::cout << "WrongCat copy constructor called!" << std::endl;
    type = copy.type;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "MÉÉÉ" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    type = rhs.type;
    return *this;
}
