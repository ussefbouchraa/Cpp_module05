/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:30:37 by ussef             #+#    #+#             */
/*   Updated: 2024/03/06 21:09:04 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


Form::Form():Name(""), gradeToSign(150),gradeToExec(150)
{
    std::cout << "Default Constructor" << std::endl;
}
    
Form::Form(const std::string _n, const int _gs, const int _ge) : Name(_n), gradeToSign(_gs), gradeToExec(_ge)
{
    std::cout << "Form Parametrized Constructor" << std::endl;
try{
    if(gradeToSign < 1)
        throw(GradeTooHighException());
    if(gradeToSign > 150)
        throw(GradeTooLowException());
    }
    catch(GradeTooHighException &ex)
    {
        std::cerr << ex.what();
    }
    catch(GradeTooLowException &ex)
    {
        std::cerr << ex.what();
    }
}

Form::Form(Form const &rhs) : Name(rhs.Name), gradeToSign(rhs.gradeToSign), gradeToExec(rhs.gradeToExec)
{
}

Form& Form::operator=(Form const &rhs)
{
    if(this != &rhs)
        *this = rhs;
    return(*this);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    try{
        if(bureaucrat.getGrade() <= this->getSign() )
                this->sign = true;
        else
            throw(GradeTooLowException() );
    }
    catch(GradeTooLowException &ex)
    {
        std::cerr << ex.what();
    }
}


std::string Form::getName() const
{
    return(this->Name);
}
bool Form::getSign()const
{
    return(this->sign);
}
int Form::getGradeToSign()const
{
    return(this->gradeToSign);
}
int Form::getGradeToExec()const
{
    return(this->gradeToExec);
}


Form::~Form()
{
    std::cout << "Destructor Called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Form &rhs)
{
    os << "** [Form Infos] ** \n";
    os << "Form Name: "<< rhs.getName() << "\t\t" ;
    os << "Grade_ToSign: "<< rhs.getGradeToSign() << "\t";
    os << "Grade_ToExcecute: "<< rhs.getGradeToExec();
    return(os);
}
