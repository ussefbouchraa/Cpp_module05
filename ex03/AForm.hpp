/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:25:12 by ussef             #+#    #+#             */
/*   Updated: 2024/03/08 12:33:40 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

class Bureaucrat;

class AForm
{
private:
    const             std::string Name;
    bool              sign;
    const int         gradeToSign;
    const int         gradeToExec;

public:
    AForm();
    AForm(const std::string _n, const int _gs, const int _ge);
    AForm(const AForm &rhs);
    AForm& operator=(const AForm &rhs);
    virtual ~AForm();

    
    std::string getName() const;
    bool getSign() const;
    int  getGradeToSign() const;
    int  getGradeToExec() const;
    void beSigned( const Bureaucrat &bureaucrat);
    
    virtual void execute(Bureaucrat const & executor) const = 0;
    


    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    

};
 std::ostream& operator<<(std::ostream& os, const AForm& form);