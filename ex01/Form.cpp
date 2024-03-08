/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 02:50:36 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/08 14:37:55 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// Form::Form()
// {
//     std::cout << "Default Constructor" << std::endl;
// }
    
Form::Form(const std::string _n, const int _gs, const int _ge) : Name(_n), gradeToSign(_gs), gradeToExec(_ge)
{
    // std::cout << "Form Parametrized Constructor" << std::endl;
    this->sign = false;
    if(gradeToSign < 1)
        throw(GradeTooHighException());
    if(gradeToSign > 150)
        throw(GradeTooLowException());
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

void Form::beSigned(Bureaucrat &bureaucrat)
{
    try{
        if(bureaucrat.getGrade() < 1 )
            throw(GradeTooHighException());
        if(bureaucrat.getGrade() > 150 || bureaucrat.getGrade() > this->getGradeToSign())
            throw(GradeTooLowException() );
        this->sign = true;
    }
    catch(GradeTooLowException &ex)
    {
        std::cerr << "Form err: "<< ex.what();
    }
    catch(GradeTooHighException &ex)
    {
        std::cerr << "Form err: "<<ex.what();
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
    // std::cout << "Destructor Called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Form &rhs)
{
    os << "** [Form Infos] ** \n";
    os << "Form Name: "<< rhs.getName() << "\t\t" ;
    os << "Grade_ToSign: "<< rhs.getGradeToSign() << "\t";
    os << "Grade_ToExcecute: "<< rhs.getGradeToExec();
    return(os);
}
