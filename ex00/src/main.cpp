/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:21:28 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/11 13:07:15 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int	main()
{
	try {
		Bureaucrat julien("Julien", 2);
		std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;

		julien.promoteGrade();
		std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;

		julien.promoteGrade();
		std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
		Bureaucrat julien("Julien", 149);
		std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;

		julien.demoteGrade();
		std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;

		julien.demoteGrade();
		std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;

	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}