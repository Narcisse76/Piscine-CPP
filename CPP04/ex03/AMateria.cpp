/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:33 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:22:59 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
AMateria::AMateria() : _type ("default")
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria constructor called - Type: " << _type << std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
    std::cout << "AMateria copy constructor called - Type: " << _type << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called for - Type: " << _type << std::endl;
}

std::string const &AMateria::getType() const
{
    return _type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        _type = other._type;
        std::cout << "AMateria assignment operator called - Type: " << _type << std::endl;
    }
    return *this;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "uses " << _type << " on " << target.getName() << std::endl;
}