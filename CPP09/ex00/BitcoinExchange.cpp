/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:11:10 by trambure          #+#    #+#             */
/*   Updated: 2026/06/23 09:27:56 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
        _data = other._data;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string &filename)
{
    _filename = filename;
    std::ifstream csvFile("data.csv");
    std::string line;
    std::getline(csvFile, line);
    while (std::getline(csvFile, line))
    {
        size_t pos = line.find(',');
        std::string date = line.substr(0, pos);
        std::string rate = line.substr(pos + 1);
        _data[date] = std::atof(rate.c_str());
    }
}

void	BitcoinExchange::parseFile()
{
    std::ifstream Data(_filename.c_str());
    std::string line;
    std::getline(Data, line);
    while (std::getline(Data, line))
    {
        size_t pos = line.find(" | ");
        if (pos == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string date = line.substr(0, pos);
        std::string value = line.substr(pos + 3);
        float val = std::atof(value.c_str());
        if (val < 0)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        else if (val > 1000)
        {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }
        std::map<std::string, float>::iterator it = _data.lower_bound(date);
        if (it == _data.begin() && it->first != date)
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }
        if (it->first != date)
            --it;
        float result = val * it->second;
        std::cout << date << " => " << val << " = " << result << std::endl;
    }
}