#include <iostream>

int main()
{
	// Text prompting for user input (intended: 1, 2, 3 and 4)
	std::cout << "Please choose:\n 1: Addition\n 2: Subtraction\n 3: Multiplication\n 4: Division\n\n";
	
	// declare integer x, to be assigned with user input value
	int x;
	
	// Get user input, store in int x
	std::cin >> x;

	// if checks vor value of int x to call appropriate function
	if (x == 1)
	{
		std::system("cls"); // cls or clear
		std::cout << "Please enter your first summand:\n";
		int s1{ };
		std::cin >> s1;

		std::cout << "\nPlease enter your second summand:\n";
		int s2{ };
		std::cin >> s2;

		int sum{ };
		sum = s1 + s2;

		std::cout << "\nYour calculated sum is equal to " << sum;
		std::cout << "\nThank you for trying this single - function C++ calculator test!\nRun the program again to try other arithmetic operations.\n\n\n";
	}
	else if (x == 2)
	{
		std::system("cls"); // cls or clear
		std::cout << "Please enter your minuend:\n";
		int min{ };
		std::cin >> min;

		std::cout << "\nPlease enter your subtrahend:\n";
		int sub{ };
		std::cin >> sub;

		int dif{ };
		dif = min - sub;

		std::cout << "\nYour calculated difference is equal to " << dif;
		std::cout << "\nThank you for trying this single - function C++ calculator test!\nRun the program again to try other arithmetic operations.\n\n\n";
	}
	else if (x == 3)
	{
		std::system("cls"); // cls or clear
		std::cout << "Please enter your first factor:\n";
		int f1{ };
		std::cin >> f1;

		std::cout << "\nPlease enter your second factor:\n";
		int f2{ };
		std::cin >> f2;

		int prod{ };
		prod = f1 * f2;

		std::cout << "\nYour calculated product is equal to " << prod;
		std::cout << "\nThank you for trying this singe - function C++ calculator test!\nRun the program again to try other arithmetic operations.\n\n\n";
	}
	else if (x == 4)
	{
		std::system("cls"); // cls or clear
		std::cout << "Please enter your dividend:\n";
		int div{ };
		std::cin >> div;

		std::cout << "\nPlease enter your divisor:\n";
		int dsor{ };
		std::cin >> dsor;

		int quot{ };
		quot = div / dsor;

		std::cout << "\nYour calculated quotient is equal to " << quot;
		std::cout << "\nThank you for trying this singe - function C++ calculator test!\nRun the program again to try other arithmetic operations.\n\n\n";
	}
	else
	{
		std::system("cls"); // cls or clear
		std::cout << "\n Error: Not a valid option!";
	}

	return 0;
}