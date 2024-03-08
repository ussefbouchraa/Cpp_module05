/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:21:32 by ussef             #+#    #+#             */
/*   Updated: 2024/03/08 20:14:11 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string target;
    
    RobotomyRequestForm();
public:

    RobotomyRequestForm(std::string _target );
    RobotomyRequestForm( const RobotomyRequestForm &rhs);
    RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
    ~RobotomyRequestForm();
    void execute(const Bureaucrat &executor)const;
};
