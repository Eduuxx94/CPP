/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:39:47 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 10:38:38 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */) {
    std::cout << "MateriaSource created!" << std::endl;
    for (int i = 0; i < 4; i++) {
        this->materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
    *this = copy;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (this->materias[i]) {
            delete this->materias[i];
        }
    }
    std::cout << "MeteriaSource destroyed!" << std::endl;
}

void MateriaSource::learnMateria(AMateria *ref) {
    if (!ref) {
        return ;
    }
    for (int i = 0; i < 4; i++) {
        if (!this->materias[i]) {
            this->materias[i] = ref;
            std::cout << ref->getType() << " Was learned!" << std::endl;
            return ;
        }
    }
    std::cout << "Unale to learn material" << std::endl;
    delete ref;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] && type == materias[i]->getType()) {
            std::cout << "Materia " << type << " was created!" << std::endl;
            return materias[i]->clone();
        }
    }
    std::cout << "Unable to create the materia: " << type << std::endl;
    return NULL;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
    for (int i = 0; i < 4; i++) {
        this->materias[i] = rhs.materias[i];
    }
    return *this;
}
