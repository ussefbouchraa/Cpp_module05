/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/11 04:23:54 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("finance_office", 142);
        Form ff("Resignation", 100, 80);
        std::cout << ff << std::endl;
        
        ff.beSigned(b1);
        b1.signForm(ff);
    }
    catch(const std::exception& e)
    {
        std::cerr << "-"<< e.what() ;
    }
    

    std::cout << "-----------------------------------\n";
    
    try
    {
        Bureaucrat b1("Devops", 130);
        Form ff("Convocation", 90, 50);
        
        std::cout << ff << std::endl;
        ff.beSigned(b1);
        b1.signForm(ff);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() ;
    }
    
    std::cout << "-----------------------------------\n";
    
        try
    {
        Bureaucrat b1("Devops", -10);
        Form ff("Convocation", 20, 37);
        
        std::cout << ff << std::endl;
        ff.beSigned(b1);
        b1.signForm(ff);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() ;
    }

}