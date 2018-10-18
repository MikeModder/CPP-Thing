#include <iostream>
#include "main.h"

int main(int argc, char const *argv[])
{
	std::cout << "Hello, World\n";
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "i is " << i << "\n";
	}
	int five = returnFive();
	std::cout << "returnFive() " << five << "\n";
	return 0;
}

int returnFive() {
	return 5;
}