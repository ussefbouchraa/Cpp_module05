/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:09:31 by ussef             #+#    #+#             */
/*   Updated: 2024/03/07 12:31:05 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ShrubberyCreationForm::ShrubberyCreationForm( ):Form(){};

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("ShrubberyCreationForm", 145, 137), target(_target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : Form(rhs), target(rhs.target){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    if(this != &rhs)
        *this = rhs;
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(const Bureaucrat &executor)const
{
if(this->getSign() == false || executor.getGrade() > this->getGradeToExec())
     throw Form::GradeTooLowException();    
     
     std::fstream filename( (this->getName() + "_shrubbery"));
     filename << "\
        #\n\
       ###\n\
      #####\n\
    #########\n\
   #####|#####\n\
    ####|####\n\
      #}|{#\n\
      #}|{#\n\
       }|{\n\
       }|{\n\
       }|{\n\
       ";

filename.close();
}