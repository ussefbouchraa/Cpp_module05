/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 02:50:47 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/08 14:26:28 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Bureaucrat;

class Form
{
private:
    const std::string Name;
    bool              sign;
    const int         gradeToSign;
    const int         gradeToExec;
    
    Form();
public:

    Form(const std::string _n, const int _gs, const int _ge);
    Form(const Form &rhs);
    Form& operator=(const Form &rhs);
    ~Form();
    
    std::string getName() const;
    bool getSign() const;
    int  getGradeToSign() const;
    int  getGradeToExec() const;
    void beSigned( Bureaucrat &bureacrat);


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