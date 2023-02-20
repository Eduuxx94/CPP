/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:01:29 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/20 12:45:33 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
private:
    /* data */
protected:
    std::string type;
public:
    WrongAnimal(/* args */);
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal& copy);
    virtual ~WrongAnimal();
    void    makeSound() const;
    std::string getType(void) const;
    WrongAnimal& operator=(const WrongAnimal& rhs);
};

#endif