/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/08 16:30:25 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

    try
        {
            
            Bureaucrat b("office_001", 150);
            b.increment_Grade();
            b.decrement_Grade();
            std::cout << b;
            b.setGrade(20);
            std::cout << b;
        }
        catch(std::exception &ex)
        {
            std::cerr << "err: " << ex.what();
        }
}