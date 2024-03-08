/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:21:48 by ussef             #+#    #+#             */
/*   Updated: 2024/03/08 18:17:59 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// RobotomyRequestForm::RobotomyRequestForm() :AForm(){};
RobotomyRequestForm::RobotomyRequestForm(std::string  _target) :AForm("ex02/ShrubberyCreationForm.cpp", 72, 45), target(_target){};
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) :AForm(rhs), target(rhs.target){};
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
 {
   if(this != &rhs)
        *this = rhs;
    return(*this);
}
RobotomyRequestForm::~RobotomyRequestForm(){};

void RobotomyRequestForm::execute(const Bureaucrat &executor)const
{
    if(executor.getGrade() > this->getGradeToSign())
        throw AForm::GradeTooLowException();
    else{
            std::cout << "sda3_sda3_sda3" << std::endl;
            static int i;
            if(i % 2 == 0)
                std::cout << this->target << "has been robotomized successfull" << std::endl;
            else
                std::cout << this->target << "the robotomy failed." << std::endl;
               i++; 
        }

        
}