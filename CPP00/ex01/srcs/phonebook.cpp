/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 15:42:21 by narcisse          #+#    #+#             */
/*   Updated: 2026/05/06 19:49:42 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"


Phonebook::Phonebook() : _index(0) {}

Phonebook::~Phonebook() {}

int Phonebook::getindex() const
{
	return (_index);
}

void Phonebook::addcontact()
{
	std::string input;
	int			slot = _index % 8;

	std::cout << "First name: ";
	std::getline(std::cin, input);
	if (input.empty())
		{ std::cout << "Field cannot be empty.\n"; return ; }
	_contacts[slot].setfirstname(input);

	std::cout << "Last name: ";
	std::getline(std::cin, input);
	if (input.empty())
		{ std::cout << "Field cannot be empty.\n"; return ; }
	_contacts[slot].setlastname(input);

	std::cout << "Nick name: ";
	std::getline(std::cin, input);
	if (input.empty())
		{ std::cout << "Field cannot be empty.\n"; return ; }
	_contacts[slot].setnickname(input);

	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	if (input.empty())
		{ std::cout << "Field cannot be empty.\n"; return ; }
	_contacts[slot].setphonenumber(input);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	if (input.empty())
		{ std::cout << "Field cannot be empty.\n"; return ; }
	_contacts[slot].setdarkestsecret(input);

	_index++;
	std::cout << "Contact added!\n";
}

static std::string truncate(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Phonebook::displaycontacts() const
{
	int i = 0;
	int count;

	if (_index < 8)
    	count = _index;
	else
    	count = 8;

	if (_index == 0)
	{
		std::cout << "No contacts saved." << std::endl;
		return ;
	}
    std::cout << std::setw(10) << "index" << "|"
              << std::setw(10) << "first name" << "|"
              << std::setw(10) << "last name" << "|"
              << std::setw(10) << "nickname" << std::endl;

    while(i < count)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(_contacts[i].getfirstname()) << "|"
                  << std::setw(10) << truncate(_contacts[i].getlastname()) << "|"
                  << std::setw(10) << truncate(_contacts[i].getnickname()) << std::endl;
		i++;
    }
}

void Phonebook::displayonecontact(int index) const
{

	int count;
	
	if (_index < 8)
    	count = _index;
	else
    	count = 8;
	
    if (index < 0 || index >= count)
    {
        std::cout << "Invalid index.\n";
        return;
    }
	
    std::cout << "First name:     " << _contacts[index].getfirstname() << "\n";
    std::cout << "Last name:      " << _contacts[index].getlastname() << "\n";
    std::cout << "Nickname:       " << _contacts[index].getnickname() << "\n";
    std::cout << "Phone number:   " << _contacts[index].getphonenumber() << "\n";
    std::cout << "Darkest secret: " << _contacts[index].getdarkestsecret() << "\n";
}
