/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:46:26 by trambure          #+#    #+#             */
/*   Updated: 2026/06/09 11:46:30 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string const& name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

AForm::~AForm() {}
AForm::AForm(const AForm& other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

AForm& AForm::operator=(const AForm& other)
{
    if (this == &other)
        return *this;
    _isSigned = other._isSigned;
    return *this;
}

std::string AForm::getName() const { return _name; }
int AForm::getGradeToSign() const { return _gradeToSign; }
int AForm::getGradeToExecute() const { return _gradeToExecute; }
bool AForm::getBool() const { return _isSigned; }

void AForm::beSigned(Bureaucrat const& bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, AForm const& f)
{
    os << f.getName() << ", form grade to sign: " << f.getGradeToSign()
       << ", grade to execute: " << f.getGradeToExecute()
       << ", signed: " << f.getBool();
    return os;
}