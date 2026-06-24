/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 08:34:22 by trambure          #+#    #+#             */
/*   Updated: 2026/06/10 08:38:00 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
		~Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);

        AForm* makeForm(std::string const& name, std::string const& target);
};

#endif