/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:48:19 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/26 19:25:46 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Zombie
{
private:
    std::string name;
public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    void    announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
