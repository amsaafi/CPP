#include "bureaucrat.hpp"


bureaucrat::bureaucrat()
{
    std::cout << "bureaucrat constructor called" << std::endl;
}
bureaucrat::bureaucrat(std::string const &name, int grade) : _name(name)
{
    this->_grade = grade;
    if (grade < 1)
        throw (bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw (bureaucrat::GradeTooLowException());
}

bureaucrat::bureaucrat(bureaucrat const &copy)
{
    *this = copy;
}

bureaucrat const	&bureaucrat::operator=(const bureaucrat &rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}


bureaucrat::~bureaucrat()
{
    std::cout << "bureaucrat destructor called" << std::endl;
}

int bureaucrat::getGrade() const
{
    return this->_grade;
}

std::string bureaucrat::getName() const
{
    return this->_name;
}


void bureaucrat::increment()
{
    if (_grade <= 1)
        throw bureaucrat::GradeTooHighException();
    this->_grade--;
}

void bureaucrat::decrement()
{
    if (_grade >= 150)
        throw bureaucrat::GradeTooLowException();
    this->_grade++;
}

std::ostream	&operator<<(std::ostream &str, bureaucrat const &bureaucrat)
{
	return (str << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}
