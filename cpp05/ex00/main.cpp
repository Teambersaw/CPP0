/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 13:32:55 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Bastien("Bastien", 1);
		Bureaucrat Theo("Theo", 75);
		Bureaucrat Hugo("Hugo", 150);
		//Bureaucrat Julot("Julot", 500);
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Can't create the bureaucrat" << e.what() << " Make sure the grade is between 1 and 150." << std::endl;
		return (0);
	}
	Bureaucrat Bastien("Bastien", 1);
	Bureaucrat Theo("Theo", 75);
	Bureaucrat Hugo("Hugo", 150);
	std::cout << Bastien << '\n' << Theo << '\n' << Hugo << '\n';

	Bastien.upper_grade();
	std::cout << Bastien << std::endl;

	Theo.upper_grade();
	std::cout << Theo << std::endl;
	Theo.lower_grade();
	std::cout << Theo << std::endl;

	Hugo.lower_grade();
	std::cout << Hugo << std::endl;
	return (0);
}