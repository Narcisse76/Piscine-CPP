/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:44 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:23:23 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") 
{
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other._type) 
{
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other) 
{
	if (this != &other) 
		_type = other._type;
    std::cout << "Ice assignment operator called" << std::endl;
	return *this;
}

Ice::~Ice() 
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const 
{
    std::cout << "Ice clone called" << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}