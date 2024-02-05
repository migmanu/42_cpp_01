#include <iomanip>
#include <iostream>
#include <string>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";

	std::string*	stringPTR = &str;

	std::string&	stringREF = str;

	std::cout
		<< "Address of str: "
		<< std::endl
		<< &str
		<< std::endl
		<< "Address stored in stringPTR: "
		<< std::endl
		<< stringPTR
		<< std::endl
		<< "Address stored in stringREF: "
		<< std::endl
		<< &stringREF
		<< std::endl
		<< std::endl
		<< "The value of str is: "
		<< std::endl
		<< str
		<< std::endl
		<< "The pointed to by stringPTR is: "
		<< std::endl
		<< *stringPTR
		<< std::endl
		<< "The pointed to by stringREF is: "
		<< std::endl
		<< stringREF
		<< std::endl
		<< std::endl;

	return (0);
}
