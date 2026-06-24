/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:46:38 by trambure          #+#    #+#             */
/*   Updated: 2026/06/09 08:01:10 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
        
    public:
        AForm(std::string const& name, int gradeToSign, int gradeToExecute);
        virtual ~AForm();
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);

        int getGradeToSign() const;
        int getGradeToExecute() const;
        std::string getName() const;
        bool getBool() const;
        void beSigned(Bureaucrat const& bureaucrat);
        virtual void execute(Bureaucrat const& executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw()
            { 
                return "Grade is too high"; 
            }
        };
        
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw()
            { 
                return "Grade is too low"; 
            }
        };

        class FormNotSignedException : public std::exception
        {
            virtual const char* what() const throw()
            { 
                return "Form is not signed"; 
            }
        };
};

std::ostream& operator<<(std::ostream& os, AForm const& f);

#endif