/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:20:55 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/11 10:03:03 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ************************************************************************** //
//                            Bureaucrat Class                                //
// ************************************************************************** //

Bureaucrat::Bureaucrat( void ) : _name("Unknow"), _grade(150)
{

}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	
}

Bureaucrat::Bureaucrat( const Bureaucrat& copy )
{
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& copy )
{
	if (this != &copy)
	{
		this->_grade = copy._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat( void )
{
	
}

// ************************************************************************** //
//                           Setters & Getters                                //
// ************************************************************************** //

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}