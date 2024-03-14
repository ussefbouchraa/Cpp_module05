/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/14 07:26:07 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

	// ShrubberyCreationForm ---> sign 145, exec 137
	// RobotomyRequestForm ---> sign 72, exec 45
	// PresidentialPardonForm ---> sign 25, exec 5
	
int main()
{
		AForm *F3 = NULL;
		AForm *F1 = NULL;
		AForm *F2 = NULL;


	try{
		Intern s;
		Bureaucrat	_Bureaucrat("Office_001", 100);
		F3 = s.makeForm("SHRUBBERY CREATION", "show");;
		std::cout << *F3;
		_Bureaucrat.signForm(*F3);
		_Bureaucrat.executeForm(*F3);
		delete F3;
	}
	catch(std::exception &ex){
		std::cout << ex.what();
		delete F3;	
	}

	std::cout << "\n----------------------------\n";

	try{
		Intern s;
		Bureaucrat	_Bureaucrat("Office_002", 40);
		F1 = s.makeForm("Robotomy Request", "home");
			std::cout << *F1;
		_Bureaucrat.signForm(*F1);
		_Bureaucrat.executeForm(*F1);
		delete F1;
	}
	catch(std::exception &ex){
		std::cout << ex.what();
		delete F1;	
	}
	
	std::cout << "\n----------------------------\n";
	
	try{
		Intern s;
		Bureaucrat	_Bureaucrat("Office_001", 60);
		F2 = s.makeForm("Presidential Pardon", "work");
		std::cout << *F2;
		_Bureaucrat.signForm(*F2);
		_Bureaucrat.executeForm(*F2);
		delete F2;
	}
	catch(std::exception &ex){
		std::cout << ex.what();
		delete F2;	
	}
	


}





	

