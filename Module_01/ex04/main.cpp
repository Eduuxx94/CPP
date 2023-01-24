/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:33:41 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/24 23:13:50 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char** argv){
    if (argc == 4) {
		std::string	replace;
        std::fstream	file;
		std::string		line;
        file.open(argv[1]);
		if (!file.is_open()){
			std::cout << "Ficheiro nao encontrado!" << std::endl;
			return 1;
		}
		std::getline(replace, line);
		std::cout << line << std::endl;
    }
    else
        std::cout << "Please use:" << std::endl << "./replace <filename>   str1   str2" << std::endl;
}
