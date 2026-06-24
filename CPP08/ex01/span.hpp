/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 00:44:10 by trambure          #+#    #+#             */
/*   Updated: 2026/04/14 01:46:14 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>
#include <string>
#include <iostream>
#include <limits>

class Span
{
    private:
        std::vector<int> _numbers;
        unsigned int _max_size;
        
    public:
        Span(unsigned int n) : _max_size(n) {}
        Span(const Span& other) : _numbers(other._numbers), _max_size(other._max_size) {}
        Span& operator=(const Span &other);
        ~Span() {}
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
};

#endif