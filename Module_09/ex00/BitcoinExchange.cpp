/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:02:36 by ede-alme          #+#    #+#             */
/*   Updated: 2023/04/07 15:40:00 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#define INT32_MAX 2147483647
#define INT32_MIN -2147483648

BitcoinExchange::BitcoinExchange(/* args */)
{
    _file.open("data.csv");
    if (!_file.is_open())
        throw std::runtime_error("\033[0;31mError: could not open file \"data.csv\".\033[0m");
}

BitcoinExchange::BitcoinExchange(const std::string& filename)
{
    // _file.clear();
    // _file.setstate(std::ios_base::failbit);
    _file.open(filename.c_str());
    if (!_file.is_open())
        throw std::runtime_error("\033[0;31mError: could not open file \"" + filename + "\".\033[0m");
}

BitcoinExchange::~BitcoinExchange()
{
    if (_file.is_open())
        _file.close();
}

void BitcoinExchange::loadinfo()
{
    std::string line;
    std::string date;
    double      value;
    size_t      i;

    i = 0;
    while (std::getline(_file, line)) {
        if (++i == 1)
            continue ;
        if (checkLineFormat(line)) {
            std::ostringstream oss;
            oss << i;
            throw std::runtime_error("\033[0;31mError: Unexpected database error found in line " + oss.str() + ".\033[0m");
        }
        date = "";
        value = 0;
        if (line.find_first_of("|,") != std::string::npos) {
            date = line.substr(0, line.find_first_of("|,")).c_str();
            value = atof(line.substr(line.find_first_of("|,") + 1).c_str());
        }
        std::pair<std::string, double> data(date, value);
        _values.insert(data);
    }
}

void BitcoinExchange::showData()
{
    std::map<std::string, double>::iterator it;

    for (it = _values.begin(); it != _values.end(); it++){
        std::cout << "Date: " << it->first;
        std::cout << " Value: " << std::setprecision(10) << it->second << std::endl << std::endl;
    }
}

bool BitcoinExchange::checkLineFormat(std::string &line)
{
    int     year;
    int     month;
    int     day;
    double  rate;

    if (line.size() < 12 || line[4] != '-' || line[7] != '-' || !strdigit(line.substr(line.find_first_of("|,") + 1))) {
        std::cout << "Error: bad input => " << line << std::endl;
        return true;
    }
    year = std::atoi(line.substr(0, line.find("-")).c_str());
    if (year < 1000 || year > 9999) {
        std::cout << "Error: bad year input => " << line << std::endl;
        return true;
    }
    month = std::atoi(line.substr(5).c_str());
    if (month < 1 || month > 12) {
        std::cout << "Error: bad month input => " << line << std::endl;
        return true;
    }
    day = std::atoi(line.substr(8).c_str());
    if (day < 1 || day > 31) {
        std::cout << "Error: bad day input => " << line << std::endl;
        return true;
    }
    rate = std::atof(line.substr(line.find_first_of("|,") + 1).c_str());
    if (rate < 0 || rate > INT32_MAX || rate < INT32_MIN) {
        if (rate < 0)
            std::cout << "Error: not a positive number." << std::endl;
        else
            std::cout << "Error: too large a number." << std::endl;
        return true;
    }
    return false;
}

bool BitcoinExchange::strdigit(std::string str)
{
    int decimal_point;

    decimal_point = 0;
    while (str[0] == ' ')
        str = str.substr(1);
    for (int i = 0; str[i]; i++) {
        if (std::isdigit(str[i]))
            continue ;
        else if ((i == 0 && str[i] == '-') || (str[i] == '.' && !decimal_point++))
            continue ;
        return false;
    }
    return true;
}

void BitcoinExchange::result(BitcoinExchange &fd) {
    std::string line;
    std::string date;
    double      value;
    double      rate;
    size_t      i;

    i = 0;
    while (std::getline(fd._file, line)) {
        if (++i == 1 || checkLineFormat(line))
            continue ;
        date = line.substr(0, line.find_first_of("|,") - 1).c_str();
        value = atof(line.substr(line.find_first_of("|,") + 1).c_str());

        std::map<std::string, double>::iterator it;
        rate = getRate(date);
        while (rate < 0) {
            date = decreaseDate(date);
            rate = getRate(date);
        }
        std::cout << date << " => " << value << " = " << value * rate << std::endl;
    }
}

double BitcoinExchange::getRate(std::string date)
{
    std::map<std::string, double>::iterator it;

    if (date == "1000-01-01")
        return 1;
    for (it = _values.begin(); it != _values.end(); it++)
        if (date == it->first)
            return it->second;
    return -1;
}

std::string BitcoinExchange::decreaseDate(std::string date)
{
    std::istringstream iss(date);
    int year, month, day;
    char separator;

    if (!(iss >> year >> separator >> month >> separator >> day)) {
        std::cout << "Invalid date format" << std::endl;;
    }
    if (day == 1) {
        if (month == 1) {
            year--;
            month = 12;
        }
        else {
            month--;
        }
        day = 31;
    }
    else {
        day--;
    }
    std::ostringstream oss;
    oss << std::setw(4) << std::setfill('0') << year << separator
        << std::setw(2) << std::setfill('0') << month << separator
        << std::setw(2) << std::setfill('0') << day;
    return oss.str();
}
