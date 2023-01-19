/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:06:21 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/18 23:35:28 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int index){
	this->buffer = 0;
	//std::cout << "Constructor phonebook" << index << std::endl;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Destructor phonebook" << std::endl;
}

void	PhoneBook::add(void){
	if (this->buffer < 8){
		this->contact[buffer].add_contact(buffer + 1);
		this->buffer++;
	}
	else {
		for (int i = 0; i < 7; i++)
			this->contact[i].copy_obj(this->contact[i + 1].send_obj());
		this->contact[7].add_contact(8);
	}
}

void	PhoneBook::search(void){
	int index;

	index = -1;
	for (int j = 0; j < 45; j++)
		std::cout << "―"; std::cout << std::endl;
	while (++index < this->buffer){
		this->contact[index].print_contact(4, 45);
	}
	std::cout << "Index for details: ";
	std::cin >> index;
	if (std::cin){
		if (index > 0 && index <= this->buffer){
			for (int j = 0; j < 67; j++)
				std::cout << "―"; std::cout << std::endl;
			this->contact[index - 1].print_contact(6, 67);
		}
		else
			std::cout << "Index out of range!" << std::endl;
	}
	else {
		std::cout << "Invalid (int)index caracter!" << std::endl;
		std::cin.clear();
		std::cin.ignore(256,'\n');
	}
}

void	PhoneBook::display_cmds(void){
	std::cout << std::endl << std::endl;
	for (int j = 0; j < 45; j++)
		std::cout << "―";
	std::cout << std::endl;
	for (int j = 0; j < 4; j++){
		std::cout << "|";
		for (int i = 0; i < (10 - this->cmd[j].length()); i++)
			std::cout << " ";
		std::cout << this->cmd[j];
	}
	std::cout << "|" << std::endl;
	for (int j = 0; j < 45; j++)
		std::cout << "―";
	std::cout << std::endl;
}
