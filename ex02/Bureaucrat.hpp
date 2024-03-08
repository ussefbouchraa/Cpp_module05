/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:29:50 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/08 12:36:00 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AForm;

class Bureaucrat
{
private:
    const  std::string Name;
    int Grade;
    
    Bureaucrat();
public:

    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &rhs);
    Bureaucrat & operator=(const Bureaucrat &rhs);
    ~Bureaucrat();
    
    std::string getName() const;
    int getGrade() const;
    void setGrade(int _g);
    void signAForm(AForm &AForm);
    void executeAForm(AForm const & AForm);
    
        
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return("Grade is too low\n");
        }
    };

    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return ( "Grade is too high\n");
        }
    };

};
    std::ostream& operator<<(std::ostream& out, Bureaucrat& rhs);

