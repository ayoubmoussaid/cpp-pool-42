#include "contact.hpp"




Contact::Contact(){}


void	Contact::add_contact(int index)
{

	this->index = index;

	std::cout << "first name: ";
	std::cin >> this->first_name;

	std::cout << "last name: ";
	std::cin >> this->last_name;
	
	std::cout << "nickname: ";
	std::cin >> this->nickname;

	std::cout << "login: ";
	std::cin >> this->login;

	std::cout << "postal address: ";
	std::cin >> this->postal_address;

	std::cout << "email address: ";
	std::cin >> this->email_address;

	std::cout << "phone number: ";
	std::cin >> this->phone_number;

	std::cout << "birthday date: ";
	std::cin >> this->birthday_date;

	std::cout << "favorite meal: ";
	std::cin >> this->favorite_meal;

	std::cout << "underwear color: ";
	std::cin >> this->underwear_color;

	std::cout << "darkest secret: ";
	std::cin >> this->darkest_secret;
}

void	Contact::print_line(std::string str)
{
	if(str.length() < 10)
		std::cout << std::setw(10) << str << "|";
	else
		std::cout << str.substr(0, 9) << ".|";
}

void	Contact::print_table()
{
	std::cout << "|" << "         " << this->index << "|";
	print_line(this->first_name);
	print_line(this->last_name);
	print_line(this->nickname);
	std::cout << std::endl;
}

void	Contact::print_full_contact()
{
	std::cout << "first name: "<< this->first_name << std::endl;
	std::cout << "last name: "<< this->last_name << std::endl;
	std::cout << "nickname: "<< this->nickname << std::endl;
	std::cout << "login: "<< this->login << std::endl;
	std::cout << "postal address: "<< this->postal_address << std::endl;
	std::cout << "email address: "<< this->email_address << std::endl;
	std::cout << "phone number: "<< this->phone_number << std::endl;
	std::cout << "birthday date: "<< this->birthday_date << std::endl;
	std::cout << "favorite meal: "<< this->favorite_meal << std::endl;
	std::cout << "underwear color: "<< this->underwear_color << std::endl;
	std::cout << "darkest secret: "<< this->darkest_secret << std::endl;
	std::cout << std::endl;
}
