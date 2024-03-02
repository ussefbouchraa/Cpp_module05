/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 02:50:36 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/02 05:46:50 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("Default"), sign(false), gradeToSign(0), gradeToExec(0)
{
    std::cout << "Default Constructor" << std::endl;
}
Form::Form(const std::string _n, bool _s, const int _gs, const int _ge) : Name(_n), sign(_s), gradeToSign(_gs), gradeToExec(_ge)
{
    std::cout << "Parametrized Constructor" << std::endl;
}
Form::Form(Form const &rhs) : Name(rhs.Name), sign(rhs.sign), gradeToSign(rhs.gradeToSign), gradeToExec(rhs.gradeToExec)
{
}

Form& Form::operator=(Form const &rhs)
{
    if(this != &rhs)
        *this = rhs;

    return(*this);
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
    os << rhs.getName() << " " ;
    os << rhs.getSign() << " ";
    os << rhs.getGradeToSign() << " ";
    os << rhs.getGradeToExec();
    return(os);
}
