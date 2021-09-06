/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:06:48 by amoussai          #+#    #+#             */
/*   Updated: 2021/07/28 08:00:09 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include <ctime>
#include <unistd.h>

struct Data{
	std::string	str;
	int			x;
};

std::string gen_random(const int len) {
    std::string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    srand( (unsigned) time(NULL));
    tmp_s.reserve(len);
    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    return tmp_s;
}

void print_data(Data *data)
{
	std::cout << "str : " << data->str << std::endl;
	std::cout << "x : " << data->x << std::endl;
}

uintptr_t serialize(Data* ptr){
	std::cout << "====== Serializing... ====== " << std::endl;
	void *info = reinterpret_cast<void*>(ptr);
	std::cout << "====== Serialization Done... ====== " << std::endl;
	return (uintptr_t)info;
}

Data* deserialize(uintptr_t raw){
	std::cout << "====== Deserializing... ====== " << std::endl;
	Data *data = reinterpret_cast<Data*>((void*)raw);
	std::cout << "====== Deserialization Done... ====== " << std::endl;
	return data;
}


int main(void)
{
	Data *data = new Data;
	data->str = std::string();
	data->str = gen_random(15);
	data->x = rand() % 100000;
	print_data(data);

	uintptr_t raw = serialize(data);
	std::cout << "uintptr_t value: " << raw << std::endl;
	Data *newdata = deserialize(raw);

	print_data(newdata);

	delete data;
	return 0;
}

