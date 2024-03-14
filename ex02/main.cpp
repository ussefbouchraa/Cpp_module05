/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/14 07:12:19 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	// ShrubberyCreationForm ---> sign 145, exec 137
	// RobotomyRequestForm ---> sign 72, exec 45
	// PresidentialPardonForm ---> sign 25, exec 5
	
	AForm *F1 = NULL;
	AForm *F2 = NULL;
	AForm *F3 = NULL;
   try {
		Bureaucrat	_Bureaucrat("Office_001", 100);
		F1 = new  ShrubberyCreationForm(_Bureaucrat.getName()); 
		std::cout << *F1;
		_Bureaucrat.setGrade(130);
		_Bureaucrat.signForm(*F1);
		_Bureaucrat.executeForm(*F1);
		delete F1;
		
	} catch (std::exception &e) {
		std::cout << e.what();
		delete F1;
	}


		    std::cout << "-----------------------------------\n";
		
   try {
		Bureaucrat	_Bureaucrat("Office_002", 24);
		F2 = new  PresidentialPardonForm(_Bureaucrat.getName()); 
		_Bureaucrat.signForm(*F2);
		_Bureaucrat.executeForm(*F2);
		delete F2;
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl ;
		delete F2;
	}
	
    std::cout << "-----------------------------------\n";	


   try {
		Bureaucrat	_Bureaucrat("Office_987", 6);
		F3 = new  RobotomyRequestForm(_Bureaucrat.getName()); 
		_Bureaucrat.signForm(*F3);
		_Bureaucrat.executeForm(*F3);
		_Bureaucrat.executeForm(*F3);
		delete F3;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		delete F3;
	}
}

	

