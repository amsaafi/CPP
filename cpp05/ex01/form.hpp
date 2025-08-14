#pragma once


#include <iostream>
#include <string>

class bureaucrat;

class form
{
    private:
        std::string const   _name;
        bool    _signed;
        int const   _signgrade;
        int const   _signexec;

    public:

        form();
        form(std::string const &name,int const &sg, int const &se);
        form(form const &copy);
        ~form();


        form const	&operator=(form const &copy);

        std::string const	&getName() const;
        bool const			&getSigned() const;
        int const			&getSignGrade() const;
        int const			&getExecSign() const;


        void	beSigned(bureaucrat &bureaucrat);

    class GradeTooHighException: public std::exception
    {
        public:
            virtual char const	*what(void) const throw();
    };
	class GradeTooLowException: public std::exception
    {
        public:
            virtual char const	*what(void) const throw();
    };



}
