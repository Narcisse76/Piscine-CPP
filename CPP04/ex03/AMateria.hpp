/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:24:35 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:23:04 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria 
{
    public:
	    AMateria();
	    AMateria(std::string const & type);
	    AMateria(const AMateria& other);
	    virtual ~AMateria();
	    AMateria& operator=(const AMateria& other);
	    std::string const & getType() const;
	    virtual AMateria* clone() const = 0;
	    virtual void use(ICharacter& target);
    protected:
	    std::string _type;
};

#endif