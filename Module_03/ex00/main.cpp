/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:42:33 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/02 23:36:35 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	a;
	ClapTrap	b("Slimer");
	a.setdmg(2);
	std::cout << "Life of b: " << b.gethitpts() << std::endl;
	a.attack(b);
	b.takeDamage(a);
	std::cout << "Life of b: " << b.gethitpts() << std::endl;
	b.beRepaired(1);
	std::cout << "Life of b: " << b.gethitpts() << std::endl;

	b.setdmg(5);
	std::cout << "Life of a: " << a.gethitpts() << std::endl;
	b.attack(a);
	a.takeDamage(b);
	std::cout << "Life of a: " << a.gethitpts() << std::endl;
	a.beRepaired(1);
	std::cout << "Life of a: " << a.gethitpts() << std::endl;
}
