/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:32:23 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 10:33:45 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewMateria.hpp"

NewMateria::NewMateria(const std::string type): AMateria(type) {
    std::cout << "NewMateria constructor called!" << std::endl;
}

NewMateria::NewMateria(const NewMateria &copy): AMateria(copy.type) {
    std::cout << "NewMateria constructor called!" << std::endl;
}

NewMateria::~NewMateria() {
    std::cout << "NewMateria destructor called!" << std::endl;
}

std::string const &NewMateria::getType() const {
    return this->type;
}

AMateria *NewMateria::clone() const{
    NewMateria*   clone = new NewMateria(this->getType());
    return clone;
}

void NewMateria::use(ICharacter &target) {
    std::cout << " used " << this->getType() << " at " << target.getName() << std::endl;
}

NewMateria &NewMateria::operator=(const NewMateria &rhs){
    this->type = rhs.getType();
    return *this;
}
