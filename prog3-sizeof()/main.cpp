#include <iostream>

int main() {
	std::cout 
        << "Size of unsigned char in bits: " 
        << sizeof(unsigned char)*8
        << std::endl;
	std::cout 
        << "Size of char in bits: " 
        << sizeof(char)*8 
        << std::endl;
	std::cout 
        << "Size of int in bits: " 
        << sizeof(int)*8 
        << std::endl;
	std::cout 
        << "Size of long int in bits: " 
        << sizeof(long int)*8 
        << std::endl;
	std::cout 
        << "Size of float in bits: " 
        << sizeof(float)*8 
        << std::endl;
	std::cout 
        << "Size of double in bits: " 
        << sizeof(double)*8 
        << std::endl;
	std::cout 
        << "Size of long double in bits: " 
        << sizeof(long double)*8 
        << std::endl;

	system("pause");
}