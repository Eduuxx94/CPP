/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:57:45 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/26 01:57:45 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(void) {
	Harl	harl;
	
	//This will call pointer of debug member function
	std::cout << "Debug expected:" << std::endl;
	harl.complain("debug");
	std::cout << std::endl;
	//This will call pointer of info member function
	std::cout << "Info expected:" << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	//This will call pointer of warning member function
	std::cout << "Warning expected:" << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	//This will call pointer of error member function
	std::cout << "Error expected:" << std::endl;
	harl.complain("error");
	std::cout << std::endl;
	//This will once again call the debug member function pointer
	std::cout << "Debug expected:" << std::endl;
	harl.complain("debug");
}