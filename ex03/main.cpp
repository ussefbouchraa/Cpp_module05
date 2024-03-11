/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/11 05:26:55 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
		AForm *F1 = NULL;
		AForm *F2 = NULL;
		AForm *F3 = NULL;


	try{
		Intern s;
		F3 = s.makeForm("SHRUBBERY CREATION", "show");;
		std::cout << *F3;
		delete F3;
	}
	catch(std::exception &ex){
		std::cout << ex.what();
		delete F3;	
	}
	
	std::cout << "\n----------------------------\n";

	try{
		Intern s;
		F1 = s.makeForm("robotomy request", "home");
			std::cout << *F1;
		delete F1;
	}
	catch(std::exception &ex){
		std::cout << ex.what();
		delete F1;	
	}
	
	std::cout << "\n----------------------------\n";
	
	try{
		Intern s;
		F2 = s.makeForm("Presidential Pardon", "work");
		std::cout << *F2;
		delete F2;
	}
	catch(std::exception &ex){
		std::cout << ex.what();
		delete F2;	
	}
	


}





	

