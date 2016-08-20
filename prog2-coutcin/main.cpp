#include <iostream>

int main() {

	std::cout << "What is your favorite number?" << std::endl;
	int Inumber;
	std::cin >> Inumber;
	std::cout << "Your favorite number is " << Inumber 
		<< std::endl << std::endl;
	char greeting[5] = { 'H', 'e', 'l', 'l', 'o' };
	std::cout << greeting << std::endl;
	std::cout << std::endl;
}
