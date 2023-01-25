/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:33:41 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/25 21:28:07 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char** argv){
    if (argc != 4) {
		std::cout << "Please use:" << std::endl << "./replace <filename>   \"str to search\"   \"str to replace\"" << std::endl;
		return 1;
	}
	if (std::string(argv[2]) == std::string(argv[3])){
		std::cout << "Error! The args are equal..." << std::endl;
		return 1;
	}
	std::fstream	file;
	file.open(argv[1], std::ios::in);
	if (!file.is_open()){
		std::cout << "File not find!" << std::endl;
		return 1;
	}
	std::ofstream	outfile((std::string(argv[1]) + std::string(".replace")).c_str(), std::ios::out);
	std::string	txt;
	std::getline(file, txt, '\0');
	int	count = 0;
	for (int i = 0; txt[i + count]; i++){
		if ((long unsigned int)(count + i) == txt.find(argv[2], i + count)){
			outfile << std::string(argv[3]);
			count += (std::string(argv[2]).length() - 1);
		}
		else{
			outfile << txt[i + count];
		}
	}
	return 0;
}
