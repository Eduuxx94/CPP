/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:49:31 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/26 18:43:51 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): name("Zombie"){
    std::cout << this->name << ": Was Created!" << std::endl;
}

Zombie::Zombie(std::string name): name(name){
    std::cout << this->name << ": Was Created!" << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->name << ": Was destroyed!" << std::endl;
}

void    Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
