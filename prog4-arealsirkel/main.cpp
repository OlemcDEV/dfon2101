#include <iostream>
#include <string>
using namespace std;

const double dPi = 3.14;
double dRadius = 0;

void areal1 () {
    cout
        << (dPi * dRadius * dRadius)
        << endl;
}

void areal2 () {
    const double lokalPi = 3.14159;
    cout
        << (lokalPi * dRadius * dRadius)
        << endl;
}

void textline1 (string input) {
    cout
        << input
        << endl;
}

//void scanner1 () - Lyst til å lage en funksjon for std::cin L31,32

int main() {
    textline1("Tast inn radius på sirkel: ");
    cin
        >> dRadius;
    textline1("Areal regnet ut med metode areal1 er: ");
    areal1();
    textline1("Areal regnet ut med metode areal2 er: ");
    areal2();
    system("pause");
}