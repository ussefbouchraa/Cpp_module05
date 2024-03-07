/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:08:36 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/07 10:03:35 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string _n, int _g) : Name(_n), Grade(_g)
{
    std::cout << "Bureaucrat Parametrized Constructor" << std::endl;
    try
 {
    if(_g < 1)
        throw (GradeTooHighException());
    if(_g > 150)
        throw (GradeTooLowException());
    this->Grade = _g;
}      
    catch(const GradeTooLowException& ex){
        std::cerr << "err::" << ex.what();
    }
    catch(const GradeTooHighException& ex){
        std::cerr << "err::" << ex.what();
    }
}

void Bureaucrat::setGrade(int _g)
{
    try
    {
        if(_g < 1)
            throw(GradeTooHighException());
        if(_g > 150)
            throw(GradeTooLowException ());
        this->Grade = _g; 
    }
    catch(GradeTooLowException &ex){
        std::cerr << "err:: " << ex.what();
    }
    catch(GradeTooHighException &ex){
        std::cerr << "err:: " << ex.what();
    }
    
}

void Bureaucrat::decrement_Grade() {
    try {
        if (Grade > 150)
            throw  GradeTooLowException();    
        this->Grade++;
    }
    catch (const GradeTooLowException &e) { 
        std::cerr << "Error: " << e.what();
    }
}

void Bureaucrat::increment_Grade()
{
    try
    {
        if(Grade < 1)
            throw GradeTooHighException();
        this->Grade--;
    }
    catch(const GradeTooHighException &e)
    {
        std::cerr << e.what();
    }
}


void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName()<< std::endl;
    }catch(GradeTooLowException &ex){
        std::cerr << this->getName() << " couldn’t sign " << form.getName() << " because " << ex.what() << std::endl ;
    }    
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
    std::cerr << this->getName()<< " Destructor Called\n";
}