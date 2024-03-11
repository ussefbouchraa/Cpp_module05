/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:36:48 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/11 05:25:20 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{

    public:
        Intern();
        Intern( const Intern &rhs);
        Intern& operator=(const Intern &rhs);
        ~Intern();
        AForm* makeForm(std::string name, std::string target);

};

class InvalidFormNameException : public std::exception{
    public:
        virtual const char *what() const throw();    
};

int check_inp(std::string Name);
std::string toLowercase(std::string str);