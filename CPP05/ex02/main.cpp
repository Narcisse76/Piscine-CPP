/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 07:36:01 by trambure          #+#    #+#             */
/*   Updated: 2026/06/10 07:42:44 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

int main()
{
    Bureaucrat boss("Boss", 1);
    Bureaucrat worker("Worker", 150);

    std::cout << BLUE << "ShrubberyCreationForm" << RESET << std::endl;
    ShrubberyCreationForm shrubbery("Lumberjack");
    boss.signForm(shrubbery);
    boss.executeForm(shrubbery);
    worker.executeForm(shrubbery);

    std::cout << BLUE << "RobotomyRequestForm" << RESET << std::endl;
    RobotomyRequestForm robotomy("Robotomizer");
    boss.signForm(robotomy);
    boss.executeForm(robotomy);
    worker.executeForm(robotomy);

    std::cout << BLUE << "PresidentialPardonForm" << RESET << std::endl;
    PresidentialPardonForm pardon("Zaphod");
    boss.signForm(pardon);
    boss.executeForm(pardon);
    worker.executeForm(pardon);
}