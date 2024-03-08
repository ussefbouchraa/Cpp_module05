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
    std::cout << "AForm Parametrized Constructor" << std::endl;
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
    try{
        if(bureaucrat.getGrade() <= this->gradeToSign)
                this->sign = true;
        else
            throw(GradeTooLowException());
    }
    catch(GradeTooLowException &ex)
    {
        std::cerr << ex.what();
    }
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
    std::cout << "Destructor Called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const AForm &rhs)
{
    os << "** [AForm Infos] ** \n";
    os << "AForm Name: "<< rhs.getName() << "\t\t" ;
    os << "Grade_ToSign: "<< rhs.getGradeToSign() << "\t";
    os << "Grade_ToExcecute: "<< rhs.getGradeToExec();
    return(os);
}
