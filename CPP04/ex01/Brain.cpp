/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 11:25:48 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:08:18 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() 
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& other) 
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other) 
{
	if (this != &other) 
    {
		std::cout << "Brain assignment operator called" << std::endl;
		for (int i = 0; i < 100; ++i)
			ideas[i] = other.ideas[i];
	}
	return *this;
}