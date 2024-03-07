/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/07 12:26:52 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
   try {
		Bureaucrat	_Bureaucrat("Office", 137);
		Form *F1 = new  ShrubberyCreationForm(_Bureaucrat.getName()); //causing leaks !!!!! must delete
		_Bureaucrat.executeForm(*F1);
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	//--------------------------------
//    try {
// 		Bureaucrat	_Bureaucrat("Office_987", 45);
// 		Form *F2 = new  RobotomyRequestForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
// 		_Bureaucrat.executeForm(*F2);
// 	} catch (std::exception &e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	//--------------------------------
//    try {
// 		Bureaucrat	_Bureaucrat("Office_000", 5);
// 		Form *F3 = new  PresidentialPardonForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
// 		_Bureaucrat.executeForm(*F3);
// 	} catch (std::exception &e) {
// 		std::cout << e.what() << std::endl;
// 	}
	
	//--------------------------------
// 	std::cout << "Shouldn't Work !" << std::endl;
//    try {
// 		Bureaucrat	_Bureaucrat("Office_4454", 151);
// 		Form *F3 = new  ShrubberyCreationForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
// 		_Bureaucrat.executeForm(*F3);
// 	} catch (std::exception &e) {
// 		std::cout << e.what() << std::endl;
// 	}
//     return 0;
}
