#include <iostream>


int main()
{
	int n, x, choice;
		std::cout << "Welcome in my calculator!" << std::endl;
		std::cout << "Type first number: ";
		std::cin >> n;
		std::cout << "Type second number: ";
		std::cin >> x;
		std::cout << "What do you want to do?" << std::endl << "[1] add" << std::endl << "[2] substract" << std::endl << "[3] multiply" << std::endl << "[4] divide" << std::endl << "[5] leave program" << std::endl;
		std::cin >> choice;
}
