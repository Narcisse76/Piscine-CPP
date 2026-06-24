/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:40 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:23:15 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") 
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other._type) 
{
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other) 
{
	if (this != &other) 
		_type = other._type;
    std::cout << "Cure assignment operator called" << std::endl;
	return *this;
}

Cure::~Cure() 
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const 
{
    std::cout << "Cure clone called" << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter& target) 
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}