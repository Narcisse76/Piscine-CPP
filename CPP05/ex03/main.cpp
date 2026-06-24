/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 07:36:01 by trambure          #+#    #+#             */
/*   Updated: 2026/06/10 08:51:46 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

int main()
{
    Intern someIntern;
    Bureaucrat boss("Boss", 1);
    AForm* form;

    std::cout << BLUE << "Test ShrubberyCreationForm" << RESET << std::endl;
    form = someIntern.makeForm("shrubbery creation", "Lumberjack");
    boss.signForm(*form);
    boss.executeForm(*form);
    delete form;

    std::cout << BLUE << "Test RobotomyRequestForm" << RESET << std::endl;
    form = someIntern.makeForm("robotomy request", "Robotomizer");
    boss.signForm(*form);
    boss.executeForm(*form);
    delete form;

    std::cout << BLUE << "Test PresidentialPardonForm" << RESET << std::endl;
    form = someIntern.makeForm("presidential pardon", "Zaphod");
    boss.signForm(*form);
    boss.executeForm(*form);
    delete form;

    std::cout << BLUE << "=== Test Invalid Form ===" << RESET << std::endl;
    form = someIntern.makeForm("invalid form", "nobody");
}