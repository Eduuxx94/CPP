/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:46:29 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/05 12:53:49 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    std::cout << "Tests:" << std::endl;
    Base* ptr = Base::generate();
    Base&   ref = *ptr;
    ptr->identify(ptr);
    ref.identify(ref);
    delete ptr;
    for (int i = 0; i < 90000000; i++);
    std::cout << std::endl;
    ptr = Base::generate();
    Base&   reff = *ptr;
    ptr->identify(ptr);
    reff.identify(reff);
    delete ptr;
    for (int i = 0; i < 90000000; i++);
    std::cout << std::endl;
    ptr = Base::generate();
    Base&   refff = *ptr;
    ptr->identify(ptr);
    refff.identify(refff);
    delete ptr;
    std::cout << std::endl << "Tests done..." << std::endl;
}
