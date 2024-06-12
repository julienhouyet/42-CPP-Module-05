/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:37:36 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 11:17:57 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// ************************************************************************** //
//                                  AForm Class                                //
// ************************************************************************** //

AForm::AForm( void ) : _name("Unknow"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	
}

AForm::AForm( std::string name, int gradeToSign, int gradeToExecute ) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
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

AForm::AForm( const AForm& copy ) : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
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

AForm& AForm::operator=( const AForm& copy )
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

AForm::~AForm( void )
{
	
}

// ************************************************************************** //
//                            Setters & Getters                               //
// ************************************************************************** //

std::string AForm::getName() const
{
	return this->_name;
}

bool AForm::getIsSigned() const
{
	return this->_isSigned;
}

int AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

// ************************************************************************** //
//                         Public Member Functions                            //
// ************************************************************************** //

void AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
	{
		throw GradeTooLowException();
	}
	this->_isSigned = true;
	
}

// ************************************************************************** //
//                             Friend Functions                               //
// ************************************************************************** //

std::ostream& operator<<(std::ostream& out, const AForm& form)
{
	out << 
	"--- Form informations ---\n" << 
	"Name : " << form.getName() << "\n" <<
	"isSigned : " << form.getIsSigned() << "\n" <<
	"GradeToSign : " << form.getGradeToSign() << "\n" <<
	"GradeToExecute : " << form.getGradeToExecute();
	return out;
}