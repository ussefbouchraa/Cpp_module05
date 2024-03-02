/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:08:36 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/02 18:13:20 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


// Bureaucrat::Bureaucrat() : Name("default")
// {
//     std::cout << "default Constructor" << std::endl;
// }

Bureaucrat::Bureaucrat( const std::string _n, int _g) : Name(_n)
{
    std::cout << "Parametrized Constructor" << std::endl;
    try
 {
    if(_g < 1)
    {
        this->Grade = 1;
        throw (GradeTooLowException());
    }
    else if(_g > 150)
    {
        this->Grade = 150;   
        throw (GradeTooHighException());
    }
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
            throw(GradeTooLowException());
        if(_g > 150)
            throw(GradeTooHighException());
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
        if (Grade < 150)
            this->Grade++;
        else
            throw GradeTooHighException();    
    }
    catch (const GradeTooHighException &e) { 
        std::cerr << "Error: " << e.what();
    }
}

void Bureaucrat::increment_Grade()
{
    try
    {
        if(Grade > 1)
            this->Grade--;
        else
            throw GradeTooLowException();
    }
    catch(const GradeTooLowException &e)
    {
        std::cerr << e.what();
    }
}

void Bureaucrat::signForm(const Form& src)const
{
    if(src.getSign())
        std::cerr << this->getName() << " signed " << src.getName()<< std::endl;
    else
        std::cerr << this->getName() << " couldn’t sign " << "because " << "reason " << std::endl;     
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