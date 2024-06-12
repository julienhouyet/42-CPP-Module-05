/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:21:28 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 16:49:42 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <iostream>

int	main()
{
	try {
		Bureaucrat julien("Julien", 110);
		std::cout << julien << std::endl;
		std::cout << " " << std::endl;
		ShrubberyCreationForm form("home");
		std::cout << form << std::endl;
		std::cout << " " << std::endl;
		julien.signForm(form);
		std::cout << " " << std::endl;
		std::cout << form << std::endl;
		std::cout << " " << std::endl;
		julien.executeForm(form);
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << " " << std::endl;
	std::cout << " " << std::endl;
	std::cout << " " << std::endl;
	
	try {
		Bureaucrat lucas("Lucas", 30);
		std::cout << lucas << std::endl;
		std::cout << " " << std::endl;
		RobotomyRequestForm form2("Lucas");
		std::cout << form2 << std::endl;
		std::cout << " " << std::endl;
		lucas.signForm(form2);
		std::cout << " " << std::endl;
		std::cout << form2 << std::endl;
		std::cout << " " << std::endl;
		lucas.executeForm(form2);
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}