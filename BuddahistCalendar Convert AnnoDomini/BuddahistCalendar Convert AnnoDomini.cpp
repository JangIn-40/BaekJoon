#include <iostream>

int BC_Convert_AD(int buddaYear)
{
	int nConvert{ 543 };
	return buddaYear - nConvert;
}

int main()
{
	int buddaYear;

	std::cin >> buddaYear;
	std::cout << BC_Convert_AD(buddaYear) << std::endl;
}