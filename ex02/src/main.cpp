/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:21:28 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 13:38:22 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int	main()
{
	Bureaucrat julien("Julien", 1);
	
	ShrubberyCreationForm form("Lucas");

	std::cout << form << std::endl;

	std::cout << " " << std::endl;

	julien.signForm(form);

	std::cout << " " << std::endl;

	std::cout << form << std::endl;

	return 0;
}