/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:44:31 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 14:43:18 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
private:
    std::string ideas[100];
    int buffer;
public:
    Brain(/* args */);
    Brain(const Brain& copy);
    ~Brain();
    void    setIdea(std::string idea);
    void    showIdeas(void);
    Brain&  operator=(const Brain& rhs);
};

#endif