#include <iostream>
using namespace std;

struct menneske {
	char gender;
	int age;
	float height;
} 

person;

int main() {

	do
	{
        cout
            << "Hello human, what is your gender? Type m or f"
            << endl;
		cin
			>>  
            person.gender;
    } while (person.gender != 'm'&&'M'&&'f'&&'F');
	cout
		<< person.gender
		<< endl;

    do
    {
        cout
            << "What is your age?"
            << endl;
        cin
            >>
            person.age;
    } while (person.age = NULL);
    cout
        << person.age
        << endl;
    system("pause");
}