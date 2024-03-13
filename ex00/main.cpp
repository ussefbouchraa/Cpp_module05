/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/11 00:04:06 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
        {   
            Bureaucrat b("office_001", 140);
            b.increment_Grade();
            std::cout << b;
            b.decrement_Grade();
            std::cout << b;
            b.setGrade(20);
            std::cout << b;
        }
        catch(std::exception &ex)
        {
            std::cerr << "err: " << ex.what();
        }
        
        //-----------------------------------------------//
        
        try
        {   
            Bureaucrat b1("office_002", 0);
            b1.increment_Grade();
            b1.decrement_Grade();
            std::cout << b1;
            b1.setGrade(20);
            std::cout << b1;
        }
        catch(std::exception &ex)
        {
            std::cerr << "err: " << ex.what();
        }
}