/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:36:35 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/10 03:15:02 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
        std::cout << "Default Constructor" << std::endl;
};

Intern::Intern(const Intern &rhs)
{
    *this = rhs;
}
Intern& Intern::operator=(const Intern  &rhs)
{
    if(this != &rhs)
        *this = rhs;
    return(*this);
}

Intern::~Intern(){};


std::string toLowercase(std::string str)
    {
        for (size_t i = 0; i < str.length(); ++i) 
        {
            if (std::isalpha(str[i]))
                str[i] = std::tolower(str[i]);
        }
    return str;
}

int check_inp(std::string Name)
{
    std::string arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon" };
    for(int i = 0; i < 3; i++)
    {
        if(arr[i] == toLowercase(Name))
            return(i);
    }
    return(-1);
    
}
AForm* Intern::makeForm(std::string name, std::string target)
{
    int index =  check_inp(name);
    switch (index)
    {
        case  0:
        {
            std::cout << "Intern creates Form " << name << std::endl; 
            return(new ShrubberyCreationForm(target));
        }
            break;
        case 1:
        {
            std::cout << "Intern creates Form " << name << std::endl; 
            return(new RobotomyRequestForm(target));
        }
            break;
        case 2:
        {
            std::cout << "Intern creates Form " << name << std::endl; 
            return(new PresidentialPardonForm(target));
        }
            break;
    default:
        throw InvalidFormNameException();
        break;
    }
    return(NULL);
}

