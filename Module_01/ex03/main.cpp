/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:37:34 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/24 22:18:39 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		std::cout << bob.getName() << " Changed weapon type --->" << std::endl;
		bob.attack();
		std::cout << std::endl;
    }
    {
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		std::cout << jim.getName() << " changed weapon --->" << std::endl;
		jim.attack();
    }
    return 0;

    return 0;
}