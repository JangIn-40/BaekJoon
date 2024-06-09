#include <iostream>
#include <iomanip>

int main()
{
	int A, B;

	std::cin >> A >> B;

	std::cout << std::setprecision(32);
	std::cout << (double)A / B << std::endl;
}
