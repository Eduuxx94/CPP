/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:45 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/21 20:51:05 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void) {
    /*
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    */
    ICharacter* mage = new Character("Mage");
    ICharacter* goblin = new Character("Goblin");
    IMateriaSource* msrc = new MateriaSource();
    msrc->learnMateria(new Ice());
    msrc->learnMateria(new Cure());
    msrc->learnMateria(new NewMateria("water"));
    std::cout << std::endl << "Tests--->>>"  << std::endl << std::endl;
    mage->equip(msrc->createMateria("something!")); //can't equip something that doesn't exist
    mage->equip(msrc->createMateria("water"));
    mage->equip(msrc->createMateria("ice"));
    mage->equip(msrc->createMateria("cure"));
    mage->use(0, *goblin);
    mage->unequip(0);
    mage->use(0, *goblin); //Mage will not find any material because we unequip him
    mage->use(2, *goblin);
    std::cout << std::endl << "<<<<----- End of tests" << std::endl << std::endl << std::endl;
    delete msrc;
    delete goblin;
    delete mage;
    return 0;
}
