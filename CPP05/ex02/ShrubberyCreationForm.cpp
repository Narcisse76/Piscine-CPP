/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:51:33 by trambure          #+#    #+#             */
/*   Updated: 2026/06/10 07:39:52 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this == &other)
        return *this;
    AForm::operator=(other);
    _target = other._target;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (getBool() == true)
    {
        if (executor.getGrade() > getGradeToExecute())
            throw GradeTooLowException();
        std::ofstream file(_target + "_shrubbery");
        file << "    *    " << std::endl;
        file << "   ***   " << std::endl;
        file << "  *****  " << std::endl;
        file << "    |    " << std::endl;
    }
    else
        throw FormNotSignedException();  
}