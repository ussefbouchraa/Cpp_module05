/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/01 03:34:13 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // Bureaucrat new_member;
    // std::cout << new_member << std::endl;
    
    // Bureaucrat finance("chef_managment", 1);
    // std::cout << finance << std::endl;
    
    // Bureaucrat devops("chef_team", 10);
    // std::cout << devops << std::endl;
    
    // Bureaucrat marketing("alienX_office", 16);
    // std::cout << marketing <<std::endl;

    // finance.increment_Grade();
    // finance.decrement_Grade();
    // finance.decrement_Grade();
    
    // std::cout << "-------"<<finance << std::endl;
    // std::cout << "-------" << new_member << std::endl;


    Bureaucrat b("moo",1);
    std::cout << "---->" << b;
    b.increment_Grade();
    b.setGrade(20);
    std::cout << "---->" << b;

    // Bureaucrat c("oom", 30);
    // b.decrement_Grade();
}