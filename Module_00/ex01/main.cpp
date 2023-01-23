/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:17:29 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/23 12:15:24 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	exec_cmd(PhoneBook *phone, std::string cmd){
	if (cmd == "ADD")
		phone->add();
	else if (cmd == "SEARCH")
		phone->search();
	else if (cmd == "EXIT")
		return false;
	else
		std::cout << "Command not found!" << std::endl;
	std::cout << std::endl;
	return true;
}

void	menu(void){
	std::string cmd;
	PhoneBook   phone;
	bool	loop;

	loop = true;
	while (loop){
		
		phone.display_cmds();
		std::cin >> cmd;
		std::cin.clear(); std::cin.ignore(256,'\n');
		loop = exec_cmd(&phone, cmd);
	}
}

int	main(void){
	menu();
}
