/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:38 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 17:06:33 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
    Brain   *brain;
public:
    Cat(void);
    Cat(const Cat& copy);
    ~Cat();
    void    makeSound() const;
    void    telepathy(void) const;
    void    train(std::string idea);
    Cat&    operator=(const Cat& rhs);
};

#endif