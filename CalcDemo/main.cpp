#include <iostream>

int main()
{
	// Text prompting for user input (intended: 1, 2, 3 and 4)
	std::cout << "Please choose an arithmetic function type and press [ENTER]:\n 1: Addition\n 2: Subtraction\n 3: Multiplication\n 4: Division\n\n";
	
	// declare integer x, to be assigned with user input value
	int x{ };
	
	// Get user input, store in int x
	std::cin >> x;

	// if checks vor value of int x, if x == 1, resume with calculation
	if (x == 1)
	{
		std::system("cls");																// cls or clear
		std::cout << "Please enter your first summand and press [ENTER]:\n";			// user prompt text
		int s1{ };																		// declare integer s1 
		std::cin >> s1;																	// assign user input to int s1

		std::cout << "\nPlease enter your second summand and press [ENTER]:\n";							// user prompt text
		int s2{ };																		// declare integer s2
		std::cin >> s2;																	// assign user input to int s2

		int sum{ };																		// declare integer sum
		sum = s1 + s2;																	// sum of int s1 and s2 values

		std::cout << "\nYour calculated sum is equal to " << sum;						// print result, followed by end string
		std::cout << "\nThank you for trying this single - function C++ calculator test!\nRun the program again to try other arithmetic operations.\n\nPress any key to terminate the application.\n\n\n";
		std::system("pause >NUL");														// echo "pause >NUL" batch command to console
	}
	else if (x == 2)
	{
		std::system("cls");																// elifs below follow same pattern as if (x == 1)
		std::cout << "Please enter your minuend and press [ENTER]:\n";
		int min{ };
		std::cin >> min;

		std::cout << "\nPlease enter your subtrahend and press [ENTER]:\n";
		int sub{ };
		std::cin >> sub;

		int dif{ };
		dif = min - sub;

		std::cout << "\nYour calculated difference is equal to " << dif;
		std::cout << "\nThank you for trying this single - function C++ calculator test!\nRun the program again to try other arithmetic operations.\n\nPress any key to terminate the application.\n\n\n";
		std::system("pause >NUL");
	}
	else if (x == 3)
	{
		std::system("cls"); // cls or clear
		std::cout << "Please enter your first factor and press [ENTER]:\n";
		int f1{ };
		std::cin >> f1;

		std::cout << "\nPlease enter your second factor and press [ENTER]:\n";
		int f2{ };
		std::cin >> f2;

		int prod{ };
		prod = f1 * f2;

		std::cout << "\nYour calculated product is equal to " << prod;
		std::cout << "\nThank you for trying this singe - function C++ calculator test!\nRun the program again to try other arithmetic operations.\n\nPress any key to terminate the application.\n\n\n";
		std::system("pause >NUL");
	}
	else if (x == 4)
	{
		std::system("cls"); // cls or clear
		std::cout << "Please enter your dividend and press [ENTER]:\n";
		int div{ };
		std::cin >> div;

		std::cout << "\nPlease enter your divisor and press [ENTER]:\n";
		int dsor{ };
		std::cin >> dsor;

		int quot{ };
		quot = div / dsor;

		std::cout << "\nYour calculated quotient is equal to " << quot;
		std::cout << "\nThank you for trying this singe - function C++ calculator test!\nRun the program again to try other arithmetic operations.\n\nPress any key to terminate the application.\n\n\n";
		std::system("pause >NUL");
	}
	else
	{
		std::system("cls"); // cls or clear
		std::cout << "\nError: Not a valid option! Please run the program again and enter a valid option on prompt.\nAvailable Options: 1, 2, 3, 4.\n\nPress any key to terminate the application.";
		std::system("pause >NUL");
	}

	return 0;	// returns 0, program terminates
}