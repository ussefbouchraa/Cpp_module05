/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:36:35 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/11 06:24:54 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
        // std::cout << "Default Constructor" << std::endl;
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

int check_inp(std::string Name, std::string *arr)
{
    for(int i = 0; i < 3; i++)
    {
        if(arr[i] == toLowercase(Name))
            return(i);
    }
    return(-1);
    
}

AForm* Intern::makeForm(std::string name, std::string target)
{

    std::string *arr = new std::string[3];
    arr[0] = "shrubbery creation";
    arr[1] = "robotomy request";
    arr[2] = "presidential pardon";
    
    int index =  check_inp(name, arr);
    delete []arr;

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

const char* ::InvalidFormNameException::what() const throw()
{
     return(" err : Form Doesn't Created !! check the Name of the Form .\n");
}