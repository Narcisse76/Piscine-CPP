/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:59:29 by trambure          #+#    #+#             */
/*   Updated: 2026/06/23 14:00:44 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const std::string &input) 
{
    parse(input);
}

PmergeMe::PmergeMe(const PmergeMe &other) 
{
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) 
{
    if (this != &other)
    {
        _deque = other._deque;
        _vector = other._vector;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::parse(const std::string &input)
{
    std::istringstream ss(input);
    std::string token;
    while (ss >> token)
    {
        int n = std::atoi(token.c_str());
        if (n < 0)
            throw std::runtime_error("Error");
        _deque.push_back(n);
        _vector.push_back(n);
    }
}

void PmergeMe::deqSort()
{
    for (size_t i = 0; i + 1 < _deque.size(); i += 2)
    {
        if (_deque[i] > _deque[i + 1])
            std::swap(_deque[i], _deque[i + 1]);
    }
    std::deque<int> large;
    for (size_t i = 1; i < _deque.size(); i += 2)
        large.push_back(_deque[i]);
    std::sort(large.begin(), large.end());
    for (size_t i = 0; i < _deque.size(); i += 2)
    {
        std::deque<int>::iterator pos = std::lower_bound(large.begin(), large.end(), _deque[i]);
        large.insert(pos, _deque[i]);
    }
    _deque = large;
}

void PmergeMe::vecSort()
{
    for (size_t i = 0; i + 1 < _vector.size(); i += 2)
    {
        if (_vector[i] > _vector[i + 1])
            std::swap(_vector[i], _vector[i + 1]);
    }
    std::vector<int> large;
    for (size_t i = 1; i < _vector.size(); i += 2)
        large.push_back(_vector[i]);
    std::sort(large.begin(), large.end());
    for (size_t i = 0; i < _vector.size(); i += 2)
    {
        std::vector<int>::iterator pos = std::lower_bound(large.begin(), large.end(), _vector[i]);
        large.insert(pos, _vector[i]);
    }
    _vector = large;
}

void PmergeMe::FJA()
{
    std::cout << "Before: ";
    for (size_t i = 0; i < _vector.size(); i++)
        std::cout << _vector[i] << " ";
    std::cout << std::endl;
    
    clock_t start = clock();
    vecSort();
    clock_t end = clock();

    std::cout << "After: ";
    for (size_t i = 0; i < _vector.size(); i++)
    std::cout << _vector[i] << " ";
    std::cout << std::endl;
    
    double time = (double)(end - start) / CLOCKS_PER_SEC * 1000000;
    
    clock_t start2 = clock();
    deqSort();
    clock_t end2 = clock();
    
    double time2 = (double)(end2 - start2) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << time << " us" << std::endl;
    std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : " << time2 << " us" << std::endl;
}