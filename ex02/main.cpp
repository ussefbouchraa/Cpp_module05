/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/08 23:13:49 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
   try {
		Bureaucrat	_Bureaucrat("Office", 100);
		AForm *F1 = new  ShrubberyCreationForm(_Bureaucrat.getName()); 
		_Bureaucrat.signForm(*F1);
		_Bureaucrat.executeForm(*F1);
		
	// delete[] F1;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl ;
		// delete[] F1;
	}


   try {
		Bureaucrat	_Bureaucrat("Office_01", 2);
		AForm *F2 = new  PresidentialPardonForm(_Bureaucrat.getName()); 
		_Bureaucrat.signForm(*F2);
		_Bureaucrat.executeForm(*F2);
		
	// delete[] F1;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl ;
		// delete[] F1;
	}
	
	
	//--------------------------------
   try {
		Bureaucrat	_Bureaucrat("Office_987", 6);
		AForm *F2 = new  RobotomyRequestForm(_Bureaucrat.getName()); 
		_Bureaucrat.signForm(*F2);
		_Bureaucrat.executeForm(*F2);
		_Bureaucrat.executeForm(*F2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

	

