/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:29:50 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/01 03:30:44 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat
{
private:
    const  std::string Name;
    int Grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &rhs);
    
    Bureaucrat & operator=(const Bureaucrat &rhs);
    
    void increment_Grade(); //--
    void decrement_Grade(); //++
    
    std::string getName() const;
    int getGrade() const;
    void setGrade(int _g);
        
    ~Bureaucrat();

        class GradeTooLowException : public std::exception {
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
    std::ostream& operator<<(std::ostream& out, Bureaucrat& rhs);

