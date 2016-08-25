#include <iostream>

struct human {
	char gender;
	int age;
	float height;
} 

person;

int main() {
    //Namecheck
	do
	{
        std::cout
            << "Hello human, what is your gender? Type m/M or f/F"
            << std::endl;
		std::cin
			>>  
            person.gender;
    } while (((person.gender) != 'm') && (person.gender != 'f') 
        && (person.gender != 'M') && (person.gender != 'F'));
	std::cout
		<< person.gender
		<< std::endl;

    //Agecheck
    do
    {
        std::cin.clear();
        std::cout
            << "What is your age?"
            << std::endl;
        std::cin.ignore()
            >>
            person.age;
        if (person.age < 0) {
            std::cout
                << "You're not fucking negative years old"
                << std::endl;
        }
        if (person.age >= 100) {
            std::cout
                << "You're very old..."
                << std::endl;
        }
    } while (std::cin.fail() || person.age <=0);
    std::cout
        << person.age
        << std::endl;

    //Height check
    do
    {
        std::cin.clear();
        std::cout
            << "What is your height? F.example: 1.75"
            << std::endl;
        std::cin.ignore()
            >>
            person.height;
        if (!(std::cin >> person.height)) {
            std::cout
                << "You have to use float number, integer and other datatypes are "
                << "not valid."
                << std::endl;
                
        }
    } while (!(std::cin >> person.height));
    system("pause");
}