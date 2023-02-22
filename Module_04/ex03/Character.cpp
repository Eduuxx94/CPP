/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:48:41 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 12:42:15 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
    std::cout << name << " Character created!" << std::endl;
    garbage = NULL;
    for (int i = 0; i < 4; i++) {
        this->materias[i] = NULL;
    }
}

Character::Character(const Character &copy) {
    std::cout << copy.getName() << " Copy created!" << std::endl;
    this->name = copy.getName();
    garbage = NULL;
    for (int i = 0; i < 4; i++) {
        if (copy.materias[i]) {
            materias[i] = copy.materias[i]->clone();
        }
    }
}

void    cleargarbage(Garbage* garbage) {
    if (garbage) {
        cleargarbage(garbage->next);
        delete garbage->p;
        delete garbage;
    }
}

Character::~Character() {
    std::cout << this->getName() << " Character destroyed!" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (materias[i]) {
            delete materias[i];
        }
    }
    cleargarbage(garbage);
}

std::string const &Character::getName() const {
    return this->name;
}

void Character::equip(AMateria* m) {
    if (!m) {
        std::cout << this->getName() <<  " Unable to equip materia!" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++) {
        if (!materias[i]) {
            materias[i] = m;
            std::cout << this->getName() << " equipped " << m->getType() << " in index: " << i << std::endl;
            return ;
        }
    }
    std::cout << this->getName() << " inventory is full!" << std::endl;
    delete m;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3) {
        std::cout << this->getName() << " unsupported inventory index!" << std::endl;
        return ;
    }
    if (this->materias[idx]) {
        std::cout << this->getName() << " unquipped a materia!" << std::endl;
        if (!garbage) {
            garbage = new Garbage;
            garbage->next = NULL;
            garbage->p = this->materias[idx];
        }
        Garbage*    temp = garbage;
        while (temp->next) {
            temp = temp->next;
        }
        temp->p = this->materias[idx];
        temp->next = new Garbage;
        temp->next->next = 0;
        temp->next->p = 0;
        this->materias[idx] = 0;
    }
    else {
        std::cout << this->getName() << " inventory index already empty!" << std::endl;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx > 3) {
        std::cout << this->getName() << " unsupported inventory materia to use!" << std::endl;
        return ;
    }
    if (this->materias[idx]) {
            std::cout << this->getName();
            materias[idx]->use(target);
    }
    else {
        std::cout << this->getName() << " Did not find any material to use on " << target.getName() << "!" << std::endl;
    }
}

Character &Character::operator=(const Character& rhs) {
    std::cout << rhs.getName() << " copy assigment done!" << std::endl;
    this->name = rhs.getName();
    garbage = NULL;
    for (int i = 0; i < 4; i++) {
        if (rhs.materias[i]) {
            materias[i] = rhs.materias[i]->clone();
        }
    }
    return *this;
}
