/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:24:09 by ussef             #+#    #+#             */
/*   Updated: 2024/03/07 12:27:29 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		const std::string target;

    	ShrubberyCreationForm();
		
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();
    void execute(const Bureaucrat &executor)const;
};
