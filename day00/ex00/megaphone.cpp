#include <iostream>
#include <string>       // std::string
#include <locale>

int main(int argc, char *argv[]){
	size_t i;
	int j;

	i = 0;
	j = 0;
	std::locale loc;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (argv[++j])
		{
			for (i = 0; i < std::strlen(argv[j]); ++i)
				std::cout << std::toupper(argv[j][i], loc);
			std::cout << " ";
		}
	std::cout << "\n";
	return 0;
}
