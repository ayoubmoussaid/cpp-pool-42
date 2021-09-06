/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:45:10 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/08 08:54:49 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <streambuf>
#include <sys/stat.h>

int	test_file(char const *file){
	struct stat buffer;
	if (stat (file, &buffer) == 0){
		if (S_ISDIR(buffer.st_mode)){
			std::cout << file << ": Is a directory" << std::endl;
			return (0);
		}
		else if (!(buffer.st_mode & S_IROTH) & !(buffer.st_mode & S_IRGRP) & !(buffer.st_mode & S_IRUSR)){
			std::cout << file << ": Permission denied" << std::endl;
			return (0);
		}
		else if (S_ISREG(buffer.st_mode))
			return (1);
	}
	std::cout << file << ": No such file or directory" << std::endl;
  	return (0); 
}

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}

int main(int argc, char const *argv[])
{
	if (argc != 4){
		std::cout << "Arguments missing!" << std::endl;
		return (1);
	}
	if(!test_file(argv[1]))
		return (1);
	std::ifstream t(argv[1]);
	std::string str;

	t.seekg(0, std::ios::end);
	str.reserve(t.tellg());
	t.seekg(0, std::ios::beg);

	str.assign((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
	replaceAll(str, std::string(argv[2]), std::string(argv[3]));
	std::string newfile = std::string(argv[1]) + std::string(".replace");
	std::ofstream out(newfile.c_str());
	out << str;
	out.close();
	t.close();
	return (0);
}
