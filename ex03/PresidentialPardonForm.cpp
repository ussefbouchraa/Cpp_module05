/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:16:52 by ussef             #+#    #+#             */
/*   Updated: 2024/03/11 04:34:27 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(){};
PresidentialPardonForm::PresidentialPardonForm(std::string  _target) :AForm("PresidentialPardonForm", 25, 5), target(_target){};
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) :AForm(rhs), target(rhs.target){};
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
 {
   if(this != &rhs)
        *this = rhs;
    return(*this);
}
PresidentialPardonForm::~PresidentialPardonForm(){};

void PresidentialPardonForm::execute(const Bureaucrat &executor)const
{
    if( this->getSign() == false || executor.getGrade() > this->getGradeToExec())
        throw(AForm::GradeTooLowException());
    else 
          std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    
}
