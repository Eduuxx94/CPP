/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:07:27 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/21 21:52:57 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <iostream>

class   Zombie {
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		Zombie* newZombie(std::string name);
		void	randomChump(std::string name);
		Zombie* zombieHorde( int N, std::string name);
	private:
		std::string	name;
		void	announce(void);
};