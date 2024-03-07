/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:06:45 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/07 12:28:11 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // Bureaucrat();
Bureaucrat b1("Devops", 70);
Form ff("Convocation", 90, 80);

ff.beSigned(b1);
std::cerr << "status sign of form is : " <<ff.getSign()<< std::endl;
b1.signForm(ff);
}