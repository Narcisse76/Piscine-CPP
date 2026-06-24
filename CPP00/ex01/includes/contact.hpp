/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narcisse <narcisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 15:39:56 by narcisse          #+#    #+#             */
/*   Updated: 2025/12/07 15:39:58 by narcisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Contact {
public:
	Contact();
	~Contact();

	void	setfirstname(const std::string &firstname);
	void	setlastname(const std::string &lastname);
	void	setnickname(const std::string &nickname);
	void	setdarkestsecret(const std::string &darkestsecret);
	void	setphonenumber(const std::string &phonenumber);

	std::string	getfirstname() const;
	std::string	getlastname() const;
	std::string	getnickname() const;
	std::string	getdarkestsecret() const;
	std::string	getphonenumber() const ;
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_darkestsecret;
	std::string	_phonenumber;
};

#endif