/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 10:13:53 by trambure          #+#    #+#             */
/*   Updated: 2026/03/30 17:11:06 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
    public:
	    WrongCat();
	    WrongCat(const WrongCat &other);
	    WrongCat &operator=(const WrongCat &other);
	    ~WrongCat();
	    void makeSound() const;
};

#endif