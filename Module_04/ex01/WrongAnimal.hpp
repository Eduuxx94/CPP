/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:50:45 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 17:25:13 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
private:
    /* data */
public:
    WrongAnimal(/* args */);
    /*virtual*/~WrongAnimal();
    /*virtual*/void    makeSound() const;
    /*virtual*/std::string    getType() const;
};

#endif