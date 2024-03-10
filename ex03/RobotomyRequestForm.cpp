/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:21:48 by ussef             #+#    #+#             */
/*   Updated: 2024/03/10 03:15:35 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :AForm(){};
RobotomyRequestForm::RobotomyRequestForm(std::string  _target) :AForm("RobotomyRequestForm", 72, 45), target(_target){};
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
    if( this->getSign() == false || executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    else{
            static int i;
            if(i % 2 == 0)
                std::cout<< "sda3_sda3_sda3 " << this->target <<  " has been robotomized successfull" << std::endl;
            else
                std::cout<< "sda3_sda3_sda3 " << this->target << " the robotomy failed." << std::endl;
               i++; 
        }

        
}