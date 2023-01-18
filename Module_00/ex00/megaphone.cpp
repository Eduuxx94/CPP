/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:22:15 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/17 20:14:23 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
/*
int main(int argc, char **argv)
{
	std::string	txt;
	size_t	words;

	words = 0;
	for (int i = 1; i < argc; i++)
	{
		txt = std::string(argv[i]);
		if (!txt[0])
			continue ;
		for (int j = 0; j < txt.length(); j++)
			std::cout << (char) toupper(txt[j]);
		std::cout << "\n";
		words++;
	}
	if (!words)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
			for (int j = 0; j < std::string(argv[i]).length(); j++)
				std::cout << (char)std::toupper(argv[i][j]);
	std::cout << "\n";
}
*/

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)std::toupper(argv[i][j]);
	std::cout << std::endl;
}
