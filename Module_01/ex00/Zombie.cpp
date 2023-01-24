/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:10:09 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/23 14:02:07 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void):name("Zombie"){
    std::cout << this->name << ": Was Created!" << std::endl;
    
    return ;
}

Zombie::Zombie(std::string name): name(name){
    std::cout << this->name << ": Was Created!" << std::endl;
    
    return ;
}

Zombie::~Zombie(void){
    std::cout << this->name << ": Was destroyed!" << std::endl;
}

Zombie *Zombie::newZombie(std::string name){
    return new Zombie(name);
}

void	Zombie::randomChump(std::string name){
    this->name = name;
    this->announce();
}

void	Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::zombieHorde( int N, std::string name)
{
    Zombie* l = new Zombie[N];
    for (int i = 0; i < N; i++)
        l[i].name = name;
    return (l);
}