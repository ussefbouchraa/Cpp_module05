/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:08:36 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/08 17:18:29 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
    // std::cout << "default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string _n, int _g) : Name(_n), Grade(_g)
{
//     std::cout << "Bureaucrat Parametrized Constructor" << std::endl;

    if(_g < 1)
        throw (GradeTooHighException());
    if(_g > 150)
        throw (GradeTooLowException());
}

void Bureaucrat::setGrade(int _g)
{
        if(_g < 1)
            throw(GradeTooHighException());
        if(_g > 150)
            throw(GradeTooLowException ());
        this->Grade = _g; 
}

void Bureaucrat::decrement_Grade() {
        if (Grade + 1 > 150)
            throw  GradeTooLowException();    
        this->Grade++;
}

void Bureaucrat::increment_Grade()
{
        if(Grade - 1 < 1)
            throw GradeTooHighException();
        this->Grade--;
}


void Bureaucrat::signForm(Form &form)
{
        form.beSigned(*this);
        if(form.getSign())
            std::cout << this->getName() << " signed " << form.getName()<< std::endl;
        else
            std::cerr << this->getName() << " couldn’t sign " << form.getName() << " because the grade is : " << this->getGrade() << std::endl ; 
}

std::string Bureaucrat::getName()const
{
    return (this->Name);
}

int Bureaucrat::getGrade()const
{
    return (this->Grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : Name(rhs.Name), Grade(rhs.Grade)
{
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if(this != &rhs)
       *this = rhs;
       
    return(*this);
}
std::ostream& operator<<(std::ostream& out, Bureaucrat &rhs)
{
    out << rhs.getName() << " bureaucrat grade " << rhs.getGrade() << std::endl;
    return(out);
}

Bureaucrat::~Bureaucrat()
{
    // std::cerr << this->getName()<< " Destructor Called\n";
}