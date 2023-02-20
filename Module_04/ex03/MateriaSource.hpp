/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:39:10 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/20 19:51:27 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
//#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria*   materias[4];
public:
    MateriaSource(/* args */);
    ~MateriaSource();
    void    learnMateria(AMateria*);
    AMateria*   createMateria(std::string const & type);
};

#endif
