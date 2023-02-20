/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:44:33 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/18 15:56:51 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */) {
    std::cout << "Brain constructer called!" << std::endl;
    buffer = 0;
}

Brain::Brain(const Brain &copy) {
    for (int i = 0; i < 100; i++) {
        ideas[i] = copy.ideas[i];
    }
    buffer = copy.buffer;
}

Brain::~Brain() {
    std::cout << "Brain destructer called!" << std::endl;
}

void Brain::setIdea(std::string idea) {
    if (buffer < 100) {
        ideas[buffer] = idea;
        buffer++;
    }
    else {
        for (int i = 0; i < 99; i++) {
            ideas[i] = ideas[i + 1];
        }
        ideas[99] = idea;
    }
}

void Brain::showIdeas(void) {
    for (int i = 0; i < buffer; i++) {
        std::cout << i + 1 << ".- " << ideas[i] << std::endl;
    }
}

Brain &Brain::operator=(const Brain &rhs) {
    for (int i = 0; i < 100; i++) {
        ideas[i] = rhs.ideas[i];
    }
    return *this;
}
