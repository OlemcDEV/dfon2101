#include <iostream>
#include <string>
using namespace std;

const double dPi = 3.14;
double dRadius = 0;

void areal1 () {
    std::cout
        << (dPi * dRadius * dRadius)
        << std::endl;
}

void areal2 () {
    const double lokalPi = 3.14159;
    std::cout
        << (lokalPi * dRadius * dRadius)
        << std::endl;
}

void textline1 (string input) {
    std::cout
        << input
        << std::endl;
}

//void scanner1 () - Lyst til å lage en funksjon for std::cin L31,32

int main() {
    textline1("Tast inn radius på sirkel: ");
    std::cin
        >> dRadius;
    textline1("Areal regnet ut med metode areal1 er: ");
    areal1();
    textline1("Areal regnet ut med metode areal2 er: ");
    areal2();
    system("pause");
}