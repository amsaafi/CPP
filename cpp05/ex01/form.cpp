#include "form.hpp"
#include "bureaucrat.hpp"

Form::Form(void): _name("default"), _signed(0), _signgrade(25), _signexec(50) {}

Form::Form(std::string const &name, int const &sg, int const &se): _name(name), _signed(0), _signgrade(sg), _signexec(se)
{
	if (this->_signgrade < 1)
		throw (Form::GradeTooHighException());
	else if (this->_signgrade > 150)
		throw (Form::GradeTooLowException());
	if (this->_signexec < 1)
		throw (Form::GradeTooHighException());
	else if (this->_signexec > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &copy): _name(copy._name), _isSigned(copy._isSigned), _signgrade(copy._signgrade), _signexec(copy._signexec)
{
	*this = copy;
}



void	form::beSigned(bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signgrade)
		throw (form::GradeTooLowException());
	else
	{
		this->_signed = 1;
		std::cout << bureaucrat.getName() << " successfully signed " << this->_name << std::endl;
	}
}

char const	*form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}
