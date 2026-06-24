/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 15:39:45 by narcisse          #+#    #+#             */
/*   Updated: 2025/12/07 15:39:46 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "contact.hpp"

class Phonebook
{
private:
	Contact	_contacts[8];
	int	_index;
public:
	Phonebook();
	~Phonebook();
	void	addcontact();
	void	displaycontacts() const;
	void	displayonecontact(int index) const;
	int		getindex() const;
};

#endif