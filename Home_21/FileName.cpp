#include <iostream>


int main()
{
	setlocale(LC_ALL, "Russian");

	// Задание 1
	int X, Y;
	std::cout << "Введите два числа -> ";
	std::cin >> X >> Y;
	int* px = &X;
	int* py = &Y;
	int tmp = *px;
	*px = *py;
	*py = tmp;
	std::cout << " X = " << X << "\n";
	std::cout << " Y = " << Y << "\n";

	return 0;
}
