#include "bureaucrat.hpp"


int main()
{
		try
		{
			bureaucrat mike("Mike", 0);
			std::cout << mike << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

	std::cout << "\n --------------------- \n\n";

		try
		{
			bureaucrat jim("Jim", 151);
			std::cout << jim << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

	std::cout << "\n --------------------- \n\n";
	

		try 
		{
			bureaucrat dur("Dur", 3);
			std::cout << dur << std::endl;
			dur.increment();
			std::cout << dur << std::endl;
			dur.increment();
			std::cout << dur << std::endl;
			dur.increment();
			std::cout << dur << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

	std::cout << "\n --------------------- \n\n";

		try 
		{
			bureaucrat alan("Alan", 149);
			std::cout << alan << std::endl;
			alan.decrement();
			std::cout << alan << std::endl;
			alan.decrement();
			std::cout << alan << std::endl;
			alan.decrement();
			std::cout << alan << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	return (0);

}