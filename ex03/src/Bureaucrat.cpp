/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:20:55 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 15:50:09 by jhouyet          ###   ########.fr       */
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
	if (_grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (_grade > 150)
	{
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat& copy )
{
	if (_grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (_grade > 150)
	{
		throw GradeTooLowException();
	}
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& copy )
{
	if (this != &copy)
	{
		if (_grade < 1)
		{
			throw GradeTooHighException();
		}
		else if (_grade > 150)
		{
			throw GradeTooLowException();
		}
		this->_grade = copy._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat( void )
{
	
}

// ************************************************************************** //
//                            Setters & Getters                               //
// ************************************************************************** //

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

// ************************************************************************** //
//                         Public Member Functions                            //
// ************************************************************************** //

void Bureaucrat::promoteGrade( void )
{
	if (this->_grade > 1)
	{
		this->_grade--;	
	}
	else
	{
		throw GradeTooHighException();
	}
}

void Bureaucrat::demoteGrade( void )
{
	if (this->_grade < 150)
	{
		this->_grade++;	
	}
	else
	{
		throw GradeTooLowException();
	}
}

void Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << "." << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " couldn't executed " << form.getName() << " because " << e.what() << "." << std::endl;
    }
}

// ************************************************************************** //
//                             Friend Functions                               //
// ************************************************************************** //

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}