/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:38 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 17:05:03 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
private:
    /* data */
public:
    Cat(void);
    Cat(const Cat& copy);
    ~Cat();
    void    makeSound() const;
    Cat&    operator=(const Cat& rhs);
};

#endif