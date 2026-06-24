/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:50 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:23:45 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource 
{
    public:
	    virtual ~IMateriaSource() {}
	    virtual void learnMateria(AMateria* m) = 0;
	    virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif