/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:33:41 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/25 12:47:07 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char** argv){
    if (argc == 4) {
        std::fstream	file;
        file.open(argv[1], std::ios::in);
		if (!file.is_open()){
			std::cout << "File not find!" << std::endl;
			return 1;
		}
		std::ofstream	outfile((std::string(argv[1]) + std::string(".replace")).c_str(), std::ios::out);
		std::cout << "\033[0;32mStarting copy file.....\033[0m" << std::endl;
		std::string	line;
		for (int i = 1; std::getline(file, line); i++){
			if (line == std::string(argv[2])){
				outfile << std::string(argv[3]) << std::endl;
				std::cout << "Replaced ";
			}
			else{
				outfile << line << std::endl;
			}
			std::cout << "Line " << i << " was insert!" << std::endl;
		}
		std::cout << "Output is: " << std::string(argv[1]) + ".replace" << std::endl;
		file.close();
		outfile.close();
    }
    else
        std::cout << "Please use:" << std::endl << "./replace <filename>   \"str to look\"   \"str to replace\"" << std::endl;
}
