/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 08:39:06 by trambure          #+#    #+#             */
/*   Updated: 2026/06/10 08:48:46 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(const Intern& other) { (void)other; }
Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

static AForm* createShrubbery(std::string const& target) { return new ShrubberyCreationForm(target); }
static AForm* createRobotomy(std::string const& target) { return new RobotomyRequestForm(target); }
static AForm* createPardon(std::string const& target) { return new PresidentialPardonForm(target); }

AForm* Intern::makeForm(std::string const& name, std::string const& target)
{
    struct FormEntry 
    {
        std::string name;
        AForm* (*create)(std::string const& target);
    };
    FormEntry forms[] = 
    {
        {"shrubbery creation", createShrubbery},
        {"robotomy request", createRobotomy},
        {"presidential pardon", createPardon}
    };
    for (int i = 0; i < 3; i++)
    {
        if (forms[i].name == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i].create(target);
        }
    }
    std::cout << "Intern Failed to create " << name << std::endl;
    return NULL;
}