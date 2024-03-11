/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:30:37 by ussef             #+#    #+#             */
/*   Updated: 2024/03/06 21:09:04 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


AForm::AForm():Name(""), gradeToSign(150),gradeToExec(150)
{
    std::cout << "Default Constructor" << std::endl;
}
    
AForm::AForm(const std::string _n, const int _gs, const int _ge) : Name(_n), gradeToSign(_gs), gradeToExec(_ge)
{
    // std::cout << "Form Parametrized Constructor" << std::endl;
    this->sign = false;
    if(gradeToSign < 1)
        throw(GradeTooHighException());
    if(gradeToSign > 150)
        throw(GradeTooLowException());
}

AForm::AForm(AForm const &rhs) : Name(rhs.Name), gradeToSign(rhs.gradeToSign), gradeToExec(rhs.gradeToExec)
{
}

AForm& AForm::operator=(AForm const &rhs)
{
    if(this != &rhs)
        *this = rhs;
    return(*this);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
        if(bureaucrat.getGrade() <= this->gradeToSign)
            this->sign = true;
        else
            throw(GradeTooLowException());

}


std::string AForm::getName() const
{
    return(this->Name);
}
bool AForm::getSign()const
{
    return(this->sign);
}
int AForm::getGradeToSign()const
{
    return(this->gradeToSign);
}
int AForm::getGradeToExec()const
{
    return(this->gradeToExec);
}


AForm::~AForm()
{
    // std::cout << "Destructor Called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const AForm  &form)
{
    os << "*----- Form Infos -----*\n";
    os << "[ Form Name: "<< form.getName() << "\t|    \t" ;
    os << "Grade_ToSign: "<< form.getGradeToSign() << "\t|\t";
    os << "Grade_ToExcecute: "<< form.getGradeToExec() << " ]";
    return(os);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ( "Grade is too High\n");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ( "Grade is too Low\n");
}