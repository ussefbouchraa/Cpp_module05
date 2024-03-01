/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 02:50:47 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/01 03:18:28 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Form
{
private:
    const std::string Name;
    bool sign;
    const int grade_Sign;
    const int grade_Exec;
    
public:

    Form(/* args */);
    ~Form();
    class GradeTooLowException : public std::exception 
    {
    public:
        virtual const char* what() const throw() {  
        return("Grade is too low\n");
        // std::cerr <<"Grade is too low\n";
        // exit(0);
        }
    };

    class GradeTooHighException : public std::exception {
    public:
    virtual const char* what() const throw() {
        return ( "Grade is too high\n");
        // std::cerr << "Grade is too high\n";
        // exit(0);
    }
    };
};

