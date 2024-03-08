/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:21:32 by ussef             #+#    #+#             */
/*   Updated: 2024/03/08 12:39:47 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : AForm
{
private:
    std::string target;
    
    RobotomyRequestForm();
public:

    RobotomyRequestForm(std::string _target );
    RobotomyRequestForm( const RobotomyRequestForm &rhs);
    RobotomyRequestForm(std::string _target );
    RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
    ~RobotomyRequestForm();
    void execute(const Bureaucrat &executor)const;
};
