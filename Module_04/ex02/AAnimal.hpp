/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:34 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 12:47:07 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

/* The AAnimal class is now a pure abstract class, also known as an interface, in C++.*/

class AAnimal
{
private:
    /* data */
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(std::string type);
    AAnimal(const AAnimal& copy);
    virtual ~AAnimal() = 0;//This ensures that any derived classes of AAnimal must implement their own destructor.
    virtual void    makeSound() const = 0;
    std::string getType(void) const;
    AAnimal& operator=(const AAnimal& rhs);
};

#endif