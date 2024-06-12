/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:53:38 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/12 18:41:48 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <fstream>

// ************************************************************************** //
//                         ShrubberyCreationForm Class                        //
// ************************************************************************** //

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137), _target("unknowTarget")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& copy ) : AForm(copy), _target(copy._target)
{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& copy )
{
	if (this != &copy)
	{
		AForm::operator=(copy);
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	
}

// ************************************************************************** //
//                         Public Member Functions                            //
// ************************************************************************** //

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
    {
        throw AForm::FormUnsignedException();
    }
    if (executor.getGrade() > this->getGradeToExecute())
    {
        throw AForm::GradeTooLowException();
    }
	
	std::ofstream file (this->_target + "_shrubbery");

	std::string fileContent =
    "                              # #### ####\n"
    "                            ### /#|### |/####\n"
    "                           ##/#/ ||/##/_/##/_#\n"
    "                         ###  /###|/ / # ###\n"
    "                       ##__#_## | #/###_/_####\n"
    "                      ## #### #  #| /  #### ##/##\n"
    "                       __#_--###`  |{,###---###-~\n"
    "                                  }{\n"
    "                                  }}{\n"
    "                                  }}{\n"
    "                             ejm  {{}\n"
    "                            , -=-~{ .-^- _\n"
	"	       ###\n"
	"	      #o###\n"
	"	    #####o###\n"
	"	   #o#/#|#/###\n"
	"	    ###/|/#o#\n"
    "        # }|{  #\n"
	"          }|{;\n";
	
	file << fileContent;

	file.close();
}