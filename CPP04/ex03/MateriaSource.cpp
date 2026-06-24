/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:56 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:24:11 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
	for (int i = 0; i < 4; ++i)
		materias[i] = 0;
    std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) 
{
	for (int i = 0; i < 4; ++i) 
    {
		if (other.materias[i])
			materias[i] = other.materias[i]->clone();
		else
			materias[i] = 0;
	}
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) 
{
	if (this != &other) 
    {
		for (int i = 0; i < 4; ++i) 
        {
			delete materias[i];
			if (other.materias[i])
				materias[i] = other.materias[i]->clone();
			else
				materias[i] = 0;
		}
        std::cout << "MateriaSource assignment operator called" << std::endl;
	}
	return *this;
}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < 4; ++i)
		delete materias[i];
    std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) 
{
	if (!m) 
    {
		std::cout << "Cannot learn null materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4; ++i) 
    {
		if (!materias[i]) 
        {
			materias[i] = m;
            std::cout << "Learned materia: " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "MateriaSource is full, cannot learn more materias" << std::endl;
}

AMateria* MateriaSource::createMateria(const std::string& type) 
{
	for (int i = 0; i < 4; ++i) 
    {
		if (materias[i] && materias[i]->getType() == type) 
        {
            std::cout << "Creating materia of type: " << type << std::endl;
			return materias[i]->clone();
		}
	}
	std::cout << "Materia of type " << type << " not found" << std::endl;
	return 0;
}