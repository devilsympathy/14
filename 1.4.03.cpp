#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int cinNumber{ 0 };
	std::cout << "Введите целое число:" << std::endl;
	std::cin >> cinNumber;
	for (int i = 1; i <= 10; i++)
	{
		std::cout << cinNumber << " x " << i << " = " << cinNumber * i << std::endl;
	}
	return 0;
}
