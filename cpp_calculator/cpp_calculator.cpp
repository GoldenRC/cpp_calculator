#include <iostream>


int main()
{
	float n, x, result;
	int choice;
	std::cout << "Welcome in my calculator!" << std::endl;
	std::cout << "Type first number: ";
	std::cin >> n;
	std::cout << "Type second number: ";
	std::cin >> x;
	std::cout << "What do you want to do?" << std::endl << "[1] add" << std::endl << "[2] substract" << std::endl <<
		"[3] multiply" << std::endl << "[4] divide" << std::endl << "[5] leave program" << std::endl;

	do {
		std::cin >> choice;
		if (choice > 5)
		{
			std::cout << "You have choosen wrong number! Try again!" << std::endl;
		}
	} while (choice > 5);

	switch (choice)
	{
	case 1:
		result = n + x;
		std::cout << "The result is equal: " << result;
		break;
	case 2:
		result = n - x;
		std::cout << "The result is equal: " << result;
		break;
	case 3:
		result = n * x;
		std::cout << "The result is equal: " << result;
		break;
	case 4:
		if (x == 0)
		{
			std::cout << "You can't divide by 0!";
		}
		else
		{
		result = n / x;
		std::cout << "The result is equal: " << result;
		}
		break;
	case 5:
		std::cout << "Goodbye!";
		break;
	}

}
