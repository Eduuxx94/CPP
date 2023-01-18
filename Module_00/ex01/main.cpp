/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:17:29 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/18 21:46:57 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    exec_cmd(PhoneBook *phone, std::string cmd){
	if (cmd == "ADD")
		phone->add();
	else if (cmd == "SEARCH")
		phone->search();
	else if (cmd == "EXIT")
		exit(0);
	else
		std::cout << "Command not found!" << std::endl;
}

void	menu(void){
	std::string cmd;
	PhoneBook   phone(8);

	while (1){
		phone.display_cmds();
		std::cin >> cmd;
		exec_cmd(&phone, cmd);
		std::cout << std::endl;
	}
}

int main(void){
	menu();
}
