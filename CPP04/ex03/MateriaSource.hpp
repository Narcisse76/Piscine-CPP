/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:58 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:24:15 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
    public:
	    MateriaSource();
	    MateriaSource(const MateriaSource& other);
	    MateriaSource& operator=(const MateriaSource& other);
	    ~MateriaSource();
	    void learnMateria(AMateria* m);
	    AMateria* createMateria(const std::string& type);
    private:
	    AMateria* materias[4];
};

#endif