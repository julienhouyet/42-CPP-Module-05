/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:37:36 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 10:16:35 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ************************************************************************** //
//                                  Form Class                                //
// ************************************************************************** //

Form::Form( void ) : _name("Unknow"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	
}

Form::Form( std::string name, int gradeToSign, int gradeToExecute ) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
	{
		throw GradeTooHighException();
	}
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
	{
		throw GradeTooLowException();
	}
}

Form::Form( const Form& copy ) : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
	if (copy._gradeToSign < 1 || copy._gradeToExecute < 1)
	{
		throw GradeTooHighException();
	}
	else if (copy._gradeToSign > 150 || copy._gradeToExecute > 150)
	{
		throw GradeTooLowException();
	}
}

Form& Form::operator=( const Form& copy )
{
	if (this != &copy)
	{
		if (copy._gradeToSign < 1 || copy._gradeToExecute < 1)
		{
			throw GradeTooHighException();
		}
		else if (copy._gradeToSign > 150 || copy._gradeToExecute > 150)
		{
			throw GradeTooLowException();
		}
	}
	return *this;
}

Form::~Form( void )
{
	
}

// ************************************************************************** //
//                            Setters & Getters                               //
// ************************************************************************** //

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getIsSigned() const
{
	return this->_isSigned;
}

int Form::getGradeToSign() const
{
	return this->_gradeToExecute;
}

int Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}