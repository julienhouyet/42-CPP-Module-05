/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:21:28 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 15:12:01 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int	main()
{
	try {
		Bureaucrat julien("Julien", 2);
		std::cout << julien << std::endl;
		std::cout << " " << std::endl;
		Form formA("Form A", 10, 10);
		std::cout << formA << std::endl;
		std::cout << " " << std::endl;
		julien.signForm(formA);
		std::cout << " " << std::endl;
		std::cout << formA << std::endl;
		std::cout << " " << std::endl;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
		Bureaucrat lucas("Lucas", 15);
		std::cout << lucas << std::endl;
		std::cout << " " << std::endl;
		Form formB("Form B", 5, 5);
		std::cout << formB << std::endl;
		std::cout << " " << std::endl;
		lucas.signForm(formB);
		std::cout << " " << std::endl;
		std::cout << formB << std::endl;
		std::cout << " " << std::endl;

	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}