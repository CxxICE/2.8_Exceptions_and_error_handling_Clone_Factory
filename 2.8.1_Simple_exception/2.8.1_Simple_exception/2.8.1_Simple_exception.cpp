#include <windows.h>

#include <iostream>
#include <exception>

class bad_length : public std::exception
{
public:
	const char *what() const override { return "Вы ввели слово запретной длины! До свидания"; }
};

int function(std::string str, int forbidden_length)
{
	if (str.length() == forbidden_length)
	{
		throw bad_length();
	}
	return str.length();		
}

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int forbidden_length;
	std::string word;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	do
	{	
		std::cout << "Введите слово: ";
		std::cin >> word;
		try
		{
			std::cout << "Длина слова \"" << word << "\" равна " << function(word, forbidden_length) << std::endl;
		}
		catch (const bad_length &err) 
		{
			std::cout << err.what() << std::endl;
			break;
		}
	} while (true);
	return 0;	
}

