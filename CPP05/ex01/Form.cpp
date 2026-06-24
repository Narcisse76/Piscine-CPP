/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 21:42:45 by trambure          #+#    #+#             */
/*   Updated: 2026/06/08 22:34:54 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const& name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();    
}

Form::~Form() {}

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

Form& Form::operator=(const Form& other)
{
    if (this == &other)
        return *this;
    _isSigned = other._isSigned;
    return *this;
}

std::string Form::getName() const 
{ 
	return _name; 
}

int Form::getGradeToSign() const 
{ 
	return _gradeToSign; 
}

int Form::getGradeToExecute() const 
{ 
	return _gradeToExecute; 
}

bool Form::getBool() const 
{ 
	return _isSigned; 
}

std::ostream& operator<<(std::ostream& os, Form const& f)
{
    os << f.getName() << ", form grade to sign: " << f.getGradeToSign() 
       << ", grade to execute: " << f.getGradeToExecute() 
       << ", signed: " << f.getBool();
    return os;
}

void Form::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw GradeTooLowException();
}