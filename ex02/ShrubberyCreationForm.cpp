/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:09:31 by ussef             #+#    #+#             */
/*   Updated: 2024/03/14 07:15:56 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( ):AForm(){};

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm("ShrubberyCreationForm", 145, 137), target(_target){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : AForm(rhs), target(rhs.target){}
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
     throw AForm::GradeTooLowException();    
     
     std::fstream filename;
     filename.open((this->getName() + "_shrubbery"), std::ios::out);
     if(!filename)
          std::cerr << "Err Creation File Failed " << std::endl;
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