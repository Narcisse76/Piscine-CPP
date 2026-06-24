/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:59:35 by trambure          #+#    #+#             */
/*   Updated: 2026/06/23 13:48:24 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>
#include <algorithm>

class PmergeMe
{
    private:
        std::vector<int> _vector;
        std::deque<int>  _deque;
    public:
        PmergeMe(const std::string &input);
	    PmergeMe(const PmergeMe &other);
	    PmergeMe &operator=(const PmergeMe &other);
	    ~PmergeMe();

        void FJA();
        void vecSort();
        void deqSort();
        void parse(const std::string &input);
};

#endif