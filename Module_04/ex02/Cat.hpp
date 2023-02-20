/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:38 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 17:49:44 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
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