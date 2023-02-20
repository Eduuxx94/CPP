/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:30:43 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/20 11:16:54 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): type(type) {
    std::cout << this->type << " AMateria String constructor called!" << std::endl;
}

AMateria::~AMateria() {
    std::cout << this->type << " AMateria Destructor called!" << std::endl;
}

std::string const &AMateria::getType() const {
    return this->type;
}
