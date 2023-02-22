/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:30:43 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 12:40:22 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "AMateria String constructor called!" << std::endl;
}

AMateria::AMateria(const AMateria &copy) {
    std::cout << "AMateria copy constructor called!" << std::endl;
    this->type = copy.type;
}

AMateria::~AMateria() {
    std::cout << this->type << " AMateria Destructor called!" << std::endl;
}

std::string const &AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter &target) {
    std::cout << " used " << this->getType() << " on " << target.getName() << std::endl;
}

AMateria & AMateria::operator=(const AMateria & rhs) {
    this->type = rhs.getType();
    return *this;
}
