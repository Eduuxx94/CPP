/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:02:34 by ede-alme          #+#    #+#             */
/*   Updated: 2023/04/10 16:38:22 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <map>
#include <iomanip>
#include <sstream>

class BitcoinExchange
{
private:
    std::ifstream       _file;
    std::string         _filename;
    std::map<std::string, double>  _values;
public:
    BitcoinExchange();
    BitcoinExchange(const std::string& filename);
    BitcoinExchange(const BitcoinExchange& copy);
    ~BitcoinExchange();
    void    loadinfo();
    void    showData();
    bool    checkLineFormat(std::string& line);
    bool    strdigit(std::string str);
    void    result(BitcoinExchange& fd);
    double  getRate(std::string date);
    std::string decreaseDate(std::string date);

    BitcoinExchange& operator=(const BitcoinExchange& rhs);
};

#endif
