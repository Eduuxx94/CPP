/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:48:50 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 10:55:06 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

struct Garbage
{
    AMateria*    p;
    Garbage* next;
};

class Character: public ICharacter
{
private:
    Garbage*    garbage;
    std::string name;
    AMateria*   materias[4];
public:
    Character(std::string name);
    Character(const Character& copy);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    Character&  operator=(const Character& rhs);
};

#endif
