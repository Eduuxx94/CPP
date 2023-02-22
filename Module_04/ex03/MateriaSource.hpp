/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:39:10 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/22 10:38:42 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
//#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "NewMateria.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria*   materias[4];
public:
    MateriaSource(/* args */);
    MateriaSource(const MateriaSource& copy);
    ~MateriaSource();
    void    learnMateria(AMateria*);
    AMateria*   createMateria(std::string const & type);
    MateriaSource&  operator=(const MateriaSource& rhs);
};

#endif
