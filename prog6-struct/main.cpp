#include <iostream>
using namespace std;

struct menneske {
	char kj�nn;
	int alder;
	float hoeyde;
} 

person;

int main() {
	cout
		<< "Hei menneske, hva er ditt kj�nn?"
		<< endl;
	cin
		>> person.kj�nn;
	cout
		<< person.kj�nn
		<< endl;
	system("pause");
}