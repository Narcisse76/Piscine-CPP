/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:14:26 by trambure          #+#    #+#             */
/*   Updated: 2026/04/01 16:40:36 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
#include <iostream>
#include <string>
#include <stdint.h>

struct Data
{
	int		i;
	float	f;
	double	d;
	char	c;
};

class Serializer
{
    private:
	    Serializer();
        ~Serializer();
        Serializer(const Serializer&);
        Serializer& operator=(const Serializer&);     
    public:
	    static uintptr_t	Serialize(Data* ptr);
	    static Data*		Deserialize(uintptr_t raw);
};

#endif