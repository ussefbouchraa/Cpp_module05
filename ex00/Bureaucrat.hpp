/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:29:50 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/28 22:21:52 by ybouchra         ###   ########.fr       */
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
    Bureaucrat & operator=(const Bureaucrat &rhs);
    
    void increment_Grade(); //--
    void decrement_Grade(); //++

    void GradeTooHighException();// 1
    void GradeTooLowException(); // 150
    
    std::string get_Name();
    int get_Grade();
    
    ~Bureaucrat();
};
    std::ostream& operator<<(std::ostream& out, Bureaucrat& rhs);

