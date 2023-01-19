/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:55:25 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/19 23:15:43 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
	//std::cout << "Constructor Contact" << std::endl;
}

Contact::~Contact(void){
	//std::cout << "Desconstructor Contact" << std::endl;
}

void	Contact::add_contact(int buffer){
	this->index = "  Index: "; this->index.append(std::to_string(buffer));
	std::cout << "First Name: "; std::cin >> this->first_name;
	std::cin.clear(); std::cin.ignore(256,'\n');
	std::cout << "Last Name: "; std::cin >> this->last_name;
	std::cin.clear(); std::cin.ignore(256,'\n');
	std::cout << "Nickname: "; std::cin >> this->nickname;
	std::cin.clear(); std::cin.ignore(256,'\n');
	std::cout << "Phone Number: "; std::cin >> this->phone_number;
	std::cin.clear(); std::cin.ignore(256,'\n');
	std::cout << "Darkest Secret: "; std::cin >> this->darkest_secret;
	std::cin.clear(); std::cin.ignore(256,'\n');
	this->obj[0] = this->index;
	this->obj[1] = this->first_name;
	this->obj[2] = this->last_name;
	this->obj[3] = this->nickname;
	this->obj[4] = this->phone_number;
	this->obj[5] = this->darkest_secret;
}

std::string* Contact::send_obj(void){
	return (this->obj);
}

void Contact::copy_obj(std::string* obj){
	this->first_name = obj[1]; this->obj[1] = this->first_name;
	this->last_name = obj[2]; this->obj[2] = this->last_name;
	this->nickname = obj[3]; this->obj[3] = this->nickname;
	this->phone_number = obj[4]; this->obj[4] = this->phone_number;
	this->darkest_secret = obj[5]; this->obj[5] = this->darkest_secret;
}

void	Contact::print_contact(int parameters, int char_display){
	int nbr_space;

	nbr_space = 0;
	std::cout << "|";
	for (int i = 0; i < parameters; i++){
		if ((this->obj[i]).length() > 10)
			std::cout << (this->obj[i]).substr(0, 9) << ".|";
		else{
			nbr_space = 10 - (this->obj[i]).length();
			while (nbr_space--)
				std::cout << " ";
			std::cout << (this->obj[i]) << "|";
		}
	}
	std::cout << std::endl;
	for (int j = 0; j < char_display; j++)
		std::cout << "―"; std::cout << std::endl;
}
