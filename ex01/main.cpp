/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/08 17:20:27 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Devops", 130);
        Form ff("Convocation", 90, 80);
        
        // ff.beSigned(b1);
        // std::cout << ff.getSign() << std::endl;
        std::cout << ff << std::endl;
        b1.signForm(ff);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() ;
    }

}