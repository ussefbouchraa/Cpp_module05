/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 02:50:47 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/02 16:59:11 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string Name;
    bool              sign;
    const int         gradeToSign;
    const int         gradeToExec;
    
public:

    // Form();
    Form(const std::string _n, const int _gs, const int _ge);
    Form(const Form &rhs);
    Form& operator=(const Form &rhs);
    
    void beSigned( Bureaucrat &src);
    
    std::string getName() const;
    bool getSign() const;
    int  getGradeToSign() const;
    int  getGradeToExec() const;
    
    ~Form();

    class GradeTooLowException : public std::exception 
    {
    public:
        virtual const char* what() const throw() {  return("Grade is too low\n");}
    };

    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() { return ( "Grade is too high\n"); }
    };
};

 std::ostream& operator<<(std::ostream& os, const Form& rhs);