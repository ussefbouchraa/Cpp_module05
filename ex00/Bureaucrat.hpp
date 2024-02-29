/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:29:50 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/29 08:38:33 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat
{
private:
    const std::string Name;
    int Grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &rhs);
    
    Bureaucrat & operator=(const Bureaucrat &rhs);
    
    void increment_Grade(); //--
    void decrement_Grade(); //++

    void GradeTooHighException();// 1
    void GradeTooLowException(); // 150
    
    std::string get_Name() const;
    int get_Grade() const;
    
    ~Bureaucrat();

    class GradeTooLowExceptions : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Grade is too low \n";
    }
};

class GradeTooHighExceptions : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Grade is too high \n";
    }
};

};
    std::ostream& operator<<(std::ostream& out, Bureaucrat& rhs);

