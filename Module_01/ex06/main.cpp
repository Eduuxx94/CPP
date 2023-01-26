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

int	main(int argc, char **argv) {
	Harl	harl;
	
	if (argc == 2){
		//This will call pointer of debug member function
		harl.complain(argv[1]);
		return 0;
	}
	return 1;
}