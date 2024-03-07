/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:25:12 by ussef             #+#    #+#             */
/*   Updated: 2024/03/07 11:54:30 by ussef            ###   ########.fr       */
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
    void beSigned( const Bureaucrat &bureaucrat);
    
    virtual void execute(Bureaucrat const & executor) const = 0;
    


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