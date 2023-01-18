/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:55:29 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/18 23:29:41 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class   Contact{
public:
	Contact();
	~Contact();
	std::string *send_obj(void);
	void	copy_obj(std::string* obj);
	void	add_contact(int buffer);
	void	print_contact(int parameters, int char_display);
private:
	std::string index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	std::string obj[6];
};

#endif