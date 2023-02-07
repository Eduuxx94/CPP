/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:43:12 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 17:10:20 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */) {
    std::cout << "WrongCat Constructor called!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor called!" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "A WrongCat Sound!" << std::endl;
}

std::string WrongCat::getType() const{
    return "Wrong Cat";
}
