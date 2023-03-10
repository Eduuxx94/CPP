/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:08:58 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/23 12:07:12 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook(void);
	~PhoneBook();
	void	add();
	void	search();
	void	display_cmds();
private:
	std::string cmd[4];
	Contact contact[8];
	int buffer;
};

#endif