/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 00:44:08 by trambure          #+#    #+#             */
/*   Updated: 2026/04/14 01:46:11 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void Span::addNumber(int n)
{
    if (_numbers.size() >= _max_size)
        throw std::runtime_error("Cannot add more numbers, span is full");
    _numbers.push_back(n);
}

Span& Span::operator=(const Span& other) 
{
	if (this != &other) 
    {
		_numbers = other._numbers;
		_max_size = other._max_size;
	}
	return *this;
}

int Span::shortestSpan()
{
    if (_numbers.size() <= 1)
        throw std::runtime_error("Not enough numbers to find a span");
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());
    int minSpan = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size() - 1; i++) 
    {
        int diff = tmp[i + 1] - tmp[i];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (_numbers.size() <= 1)
        throw std::runtime_error("Not enough numbers to find a span");
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());

    return max - min;
}