/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:13:15 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 19:08:00 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// ************************************************************************** //
//                            Bureaucrat Class                                //
// ************************************************************************** //

Intern::Intern( void )
{
    _formCreationMethods[0] = &Intern::_newRobotomyRequestForm;
    _formCreationMethods[1] = &Intern::_newShrubberyCreationForm;
    _formCreationMethods[2] = &Intern::_newPresidentialPardonForm;
}

Intern::Intern( const Intern& copy )
{
	(void)copy;
	*this = copy;
}

Intern& Intern::operator=( const Intern& copy )
{
	(void)copy;
	return *this;
}

Intern::~Intern( void )
{
	
}

AForm* Intern::makeForm(std::string name, std::string target) const
{
    std::string forms[] = { "robotomy request", "shrubbery creation", "presidential pardon" };

    for (int i = 0; i < 3; ++i)
    {
        if (forms[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*_formCreationMethods[i])(target);
        }
    }
    std::cerr << "Unknown form: " << name << std::endl;
    return nullptr;
}


AForm* Intern::_newShrubberyCreationForm(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::_newRobotomyRequestForm(std::string target) const
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::_newPresidentialPardonForm(std::string target) const
{
	return (new PresidentialPardonForm(target));
}