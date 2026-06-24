/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 09:46:12 by trambure          #+#    #+#             */
/*   Updated: 2026/06/23 12:29:04 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(const std::string &input) : _input(input) {}

RPN::RPN(const RPN &other) 
{
    *this = other;
}

RPN &RPN::operator=(const RPN &other) 
{
    if (this != &other)
    {
        _input = other._input;
        _data = other._data;
    }
    return *this;
}

RPN::~RPN() {}

int RPN::calculus()
{
    int i = 0;
    while (_input[i])
    {
        if (isdigit(_input[i]))
            _data.push(_input[i] - '0');
        else if (_input[i] == '+')
        {
            if (_data.size() < 2)
                throw std::runtime_error("Error");
            int a = _data.top(); _data.pop();
            int b = _data.top(); _data.pop();
            _data.push(b + a);
        }
        else if (_input[i] == '-')
        {
            if (_data.size() < 2)
                throw std::runtime_error("Error");
            int a = _data.top(); _data.pop();
            int b = _data.top(); _data.pop();
            _data.push(b - a);
        }
        else if (_input[i] == '*')
        {
            if (_data.size() < 2)
                throw std::runtime_error("Error");
            int a = _data.top(); _data.pop();
            int b = _data.top(); _data.pop();
            _data.push(b * a);
        }
        else if (_input[i] == '/')
        {
            if (_data.size() < 2)
                throw std::runtime_error("Error");
            int a = _data.top(); _data.pop();
            int b = _data.top(); _data.pop();
            _data.push(b / a);
        }
        else if (_input[i] != ' ')
            throw std::runtime_error("Error");
        i++;
    }
    return _data.top();
}