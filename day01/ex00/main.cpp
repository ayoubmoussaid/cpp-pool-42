#include "Pony.hpp"

void	instructions()
{
	std::cout << "\n\n***************************************************\n\n";
	std::cout << "Available commands are: \n";
	std::cout << "NAME: give/change name to pony\n";
	std::cout << "AGE: give/change age to pony\n";
	std::cout << "SHOW: Show pony's details\n";
	std::cout << "EXIT: kill the pony and leave\n";
}

void ponyOnTheStack()
{
	std::string input;
	std::string tmp;
	int age;
	int check = 0;
	Pony pony = Pony();
	instructions();
	while (1)
	{
		std::cout << "Command: ";
		if (!std::getline(std::cin, input))
			return ;
		if(input.compare("NAME") == 0)
		{
			std::cout << "Your pony's name: ";
			if (!std::getline(std::cin, tmp))
				return ;
			pony.set_name(tmp);
			check = 1;
		}
		else if(input.compare("AGE") == 0)
		{
			std::cout << "Your pony's age: ";
			std::cin >> age;
			std::getline(std::cin, tmp);
			pony.set_age(age);
			check = 1;
		}
		else if(input.compare("SHOW") == 0)
		{
			if(check)
				pony.print_info();
			else
				std::cout << "Your pony doesn't have a name or age !!!\n";
		}
		else if (input.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Invalid command\n";
	}
	exit(0);
}

void ponyOnTheHeap()
{
	std::string input;
	std::string tmp;
	int age;
	int check = 0;
	Pony *pony = new Pony();
	instructions();
	while (1)
	{
		std::cout << "Command: ";
		if (!std::getline(std::cin, input))
			return ;
		if(input.compare("NAME") == 0)
		{
			std::cout << "Your pony's name: ";
			if (!std::getline(std::cin, tmp))
				return ;
			pony->set_name(tmp);
			check = 1;
		}
		else if(input.compare("AGE") == 0)
		{
			std::cout << "Your pony's age: ";
			std::cin >> age;
			std::getline(std::cin, tmp);
			pony->set_age(age);
			check = 1;
		}
		else if(input.compare("SHOW") == 0)
		{
			if(check)
				pony->print_info();
			else
				std::cout << "Your pony doesn't have a name or age !!\n";
		}
		else if (input.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Invalid command\n";
	}
	delete pony;
	exit(0);
}

int main()
{
	std::string input;
	std::cout << "*********** Welcome to the Pony program ***********\n";
	std::cout << "===>>> Stack or Heap ? (1 for stack /2 for heap): ";
	if (!std::getline(std::cin, input))
		return (0);
	if(input.compare("1") == 0)
		ponyOnTheStack();
	else if(input.compare("2") == 0)
		ponyOnTheHeap();
	else
		std::cout << "Invalid input\n";
	return 0;
}
