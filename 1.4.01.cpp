#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int cinNumber{ 0 }, result{ 0 };
	do
	{
		std::cout << "Введите целое число или число '0', чтобы закончить:" << std::endl;
		std::cin >> cinNumber;
		result += cinNumber;
	} while (cinNumber != 0);
	std::cout << "Сумма: " << result << std::endl;
	return 0;
}
