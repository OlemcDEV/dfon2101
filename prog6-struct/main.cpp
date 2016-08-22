#include <iostream>
using namespace std;

struct menneske {
	char kjønn;
	int alder;
	float hoeyde;
} 

person;

int main() {
	cout
		<< "Hei menneske, hva er ditt kjønn?"
		<< endl;
	cin
		>> person.kjønn;
	cout
		<< person.kjønn
		<< endl;
	system("pause");
}