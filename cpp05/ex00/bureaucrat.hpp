#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>

class bureaucrat
{
    private :
        std::string _name;
        int _grade;

    public :
        std::string getName() const;
        int getGrade() const;

        bureaucrat();
        bureaucrat(std::string const &name, int grade);
        bureaucrat(bureaucrat const &copy);
        ~bureaucrat();

        void    increment();
        void    decrement();

        bureaucrat const	&operator=(bureaucrat const &rhs);

    class GradeTooHighException : public std::exception
    {
        virtual const char* what() const noexcept
        {
            return ("grade too high!");
        }
    };

    class GradeTooLowException : public std::exception
    {
        virtual const char* what() const noexcept
        {
            return ("grade too low!");
        }
    };
    
};

std::ostream	&operator<<(std::ostream &str, bureaucrat const &bureaucrat);




#endif