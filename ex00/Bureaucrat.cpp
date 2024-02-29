/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:08:36 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/29 09:05:11 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("unknown"), Grade(150)
{
    std::cout << "default Constructor" << std::endl;
}


Bureaucrat::Bureaucrat( const std::string _n, int _g) : Name(_n), Grade(_g)
{
    std::cout << "Parametrized Constructor" << std::endl;
    try
 {
    if(_g < 1)
    {
        this->Grade = 1;
        throw (GradeTooLowExceptions());
    }
    if(_g > 150)
    {
        this->Grade = 150;   
        throw (GradeTooHighExceptions());
    }
}      
    catch(const GradeTooLowExceptions& ex){
        std::cerr << "err::" << ex.what();
    }
    catch(const GradeTooHighExceptions& ex){
        std::cerr << "err::" << ex.what();
    }
}
    
    
// Bureaucrat::Bureaucrat( const std::string _n, int _g) : Name(_n), Grade(_g)
// {
//     std::cout << "Parametrized Constructor" << std::endl;      
//     try
//     {
//        if(_g >= 1 && _g <= 150)
//                 this->Grade = _g;
//         else
//             throw this->Grade;
//     }
//     catch(int res)
//     {
//         this->Grade = 150;
//         std::cout << "err:: Invalid Grade" << std::endl;
//     }
// }


void Bureaucrat::decrement_Grade() {
    try {
        if (Grade < 150)
            this->Grade++;
        else
            throw GradeTooHighExceptions(); 
    } catch (const GradeTooHighExceptions &e) { 
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
void Bureaucrat::increment_Grade()
{
    try
    {
        if(Grade > 1)
            this->Grade--;
        else
            throw GradeTooLowExceptions();
    }
    catch(const GradeTooLowExceptions &e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void Bureaucrat::GradeTooHighException()
{
    this->Grade = 1;
}

void Bureaucrat::GradeTooLowException()
{
    this->Grade = 150;
}


std::string Bureaucrat::get_Name()const
{
    return (this->Name);
}

int Bureaucrat::get_Grade()const
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
    out << rhs.get_Name() << " bureaucrat grade " << rhs.get_Grade() << std::endl;
    return(out);
}

Bureaucrat::~Bureaucrat()
{
    std::cerr << "Destructor Called\n";
}