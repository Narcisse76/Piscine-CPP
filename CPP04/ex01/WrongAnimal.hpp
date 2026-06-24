/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 10:13:49 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:09:13 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
	    WrongAnimal(const std::string &type);
	    WrongAnimal(const WrongAnimal &other);
	    WrongAnimal &operator=(const WrongAnimal &other);
	    virtual ~WrongAnimal();
	    void makeSound() const;
	    std::string getType() const;
    protected:
	    std::string _type;
};

#endif