/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:45:43 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 17:26:54 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl << std::endl << "Types:" << std::endl;
    std::cout << "meta : " << meta->getType() << std::endl;
    std::cout << "j : " << j->getType() << "        \033[0;32mCorrect type detected!\033[0m" << std::endl;
    std::cout << "i : " << i->getType() << "        \033[0;32mCorrect type detected!\033[0m" << std::endl;
    std::cout << std::endl << std::endl << "Sounds:" << std::endl;
    meta->makeSound();
    j->makeSound();
    std::cout << "        \033[0;32mCorrect sound detected!\033[0m" << std::endl;
    i->makeSound();
    std::cout << "        \033[0;32mCorrect sound detected!\033[0m" << std::endl;

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << std::endl << "Wrong Animal:" << std::endl;
    const WrongAnimal* meta_wa = new WrongAnimal();
    const WrongAnimal* i_wa = new WrongCat();
    std::cout << std::endl << std::endl << "Wrong Types:" << std::endl;
    std::cout << "meta_wa : " << meta_wa->getType() << "        \033[0;32mCorrect type detected!\033[0m" << std::endl;
    std::cout << "i_wa : " << i_wa->getType() << "        \033[0;31mWrong type detected!\033[0m" << std::endl;
    std::cout << std::endl << std::endl << "Sounds:" << std::endl;
    meta_wa->makeSound();
    std::cout << "        \033[0;32mCorrect sound detected!\033[0m" << std::endl;
    i_wa->makeSound();
    std::cout << "        \033[0;31mWrong sound detected!\033[0m" << std::endl;

    delete meta_wa;
    delete i_wa;

    return 0;
}
