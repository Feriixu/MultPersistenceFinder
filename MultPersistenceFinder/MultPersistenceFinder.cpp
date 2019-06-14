// MultPersistenceFinder.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "MultPersistenceFinder.h"

void CheckSteps(long long num);

int GetQProdSteps(long long num, int steps);

int desiredLength = 9;

int main()
{
	long long num = 277777788888899;
	while (true)
	{
		CheckSteps(num);
		num++;
	}
}

void CheckSteps(long long num)
{
	int steps = GetQProdSteps(num, 0);
	if (steps > desiredLength)
	{
		std::cout << num << std::endl;
		std::cout << steps << std::endl;
	}
}

int GetQProdSteps(long long num, int steps)
{
	steps++; // Increase Steps by one
	long long prod = 1;
	// Calc product
	while (num != 0)
	{
		prod = prod * (num % 10);
		num = num / 10;
	}
	
	// Output product
	// std::cout << prod << std::endl;

	if (prod < 10)
	{
		return steps;
	}
	else
	{
		return GetQProdSteps(prod, steps);
	}
}
