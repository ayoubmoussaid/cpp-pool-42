
#include "contact.hpp"


void search_phonebook(Contact phonebook[], int index)
{
	int i = 0;
	int search;

	if (index == 0)
	{
		std::cout << "No Contacts available\n";
		return ;
	}
	std::cout << "|     index|first name| last name|  nickname|\n";
	while(i < index)
		phonebook[i++].print_table();
	std::cout << "your index is: ";
	std::cin >> search;
	if(search >= index || search < 0)
		std::cout << "Searched index doesn't exist\n";
	else
		phonebook[search].print_full_contact();
}


void	welcome_msg()
{
	std::cout << "Welcome to PhoneBook\n";
	std::cout << "--------------------\n\n";
	std::cout << "available commands:\n";
	std::cout << "ADD: add new contact\n";
	std::cout << "SEARCH: find contact\n";
	std::cout << "EXIT: leave phonebook\n\n\n";
}

int main(void)
{
	Contact phonebook[8];
	std::string cmd;
	int index;
	index = 0;
	welcome_msg();
	while(1)
	{
		std::cout << "Your Command: ";
		std::cin >> cmd;
		if(cmd.compare("EXIT") == 0)
			exit(0);
		else if(cmd.compare("ADD") == 0)
		{
			if(index == 8)
				std::cout << "PhoneBook is full (max 8 contacts)";
			else
			{
				phonebook[index].add_contact(index);
				index++;
			}
		}
		else if(cmd.compare("SEARCH") == 0)
		{
			search_phonebook(phonebook, index);
		}
		else
			std::cout << "invalid command\n";
	}
}
