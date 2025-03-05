#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int cinNumber{ 0 }, result{ 0 };
	std::cout << "Введите целое число:" << std::endl;
	std::cin >> cinNumber;
	do {
		result += cinNumber % 10;
		cinNumber /= 10;
	} while (cinNumber != 0);
	std::cout << "Сумма цифр: " << result << std::endl;
	return 0;
}
