#pragma once
#include <iostream>
class Numbers
{
	int a;
	int b;
public:
	void SetNumber(int number, int number2)
	{
		a = number;
		b = number2;
	}
	void PrintNumber()
	{
		std::cout << '\n' << a << ' ' << b << '\n';
	}

};

