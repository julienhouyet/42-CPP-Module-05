/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:21:28 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/11 10:59:33 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int	main()
{
	Bureaucrat julien("Julien", 2);

	std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;

	julien.promoteGrade();

	std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;

	julien.promoteGrade();

	std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;

	julien.promoteGrade();

	std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;

	julien.promoteGrade();

	std::cout << julien.getName() << " : " << julien.getGrade() << std::endl;

	return 0;
}