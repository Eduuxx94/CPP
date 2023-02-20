/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:45 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/20 12:53:36 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
    Animal* animals[4];

    for (int i = 0; i < 4; i++) {
        if (i < 2) {
            animals[i] = new Dog();
        }
        else {
            animals[i] = new Cat();
        }
    }
    for (int i = 0; i < 4; i++) {
        std::cout << "      Will be deleted: ";
        animals[i]->makeSound();
        delete animals[i];
    }
    return 0;
}
