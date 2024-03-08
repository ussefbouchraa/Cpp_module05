/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:17:18 by ussef             #+#    #+#             */
/*   Updated: 2024/03/08 13:19:05 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : AForm
{
private:
    std::string target;
    
    PresidentialPardonForm();
public:

    PresidentialPardonForm(std::string _target );
    PresidentialPardonForm( const PresidentialPardonForm &rhs);
    PresidentialPardonForm(std::string _target );
    PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
    ~PresidentialPardonForm();
    void execute(const Bureaucrat &executor)const;
};