/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:57:55 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/26 01:57:55 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
	(this->*f[1])();
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!If you did, I wouldn't be asking for more!" << std::endl << std::endl;
	(this->*f[2])();
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
	(this->*f[3])();
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
	int	i = 0;
	std::string levels[4] = { "debug", "info", "warning" , "error" };
	while (i < 4){
		if (!(levels[i].compare(level))) {
			break ;
		}
		i++;
	}
	switch (i)
	{
	case 0:
		(this->*f[i])();
		break;
	case 1:
		(this->*f[i])();
		break;
	case 2:
		(this->*f[i])();
		break;
	case 3:
		(this->*f[i])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;;
	}
}

Harl::Harl(void)
{
	this->f[0] = &Harl::debug;
	this->f[1] = &Harl::info;
	this->f[2] = &Harl::warning;
	this->f[3] = &Harl::error;
}

Harl::~Harl(void)
{
}
