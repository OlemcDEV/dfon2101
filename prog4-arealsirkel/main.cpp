#include <iostream>

double dPi = 3.14;
double dRadius = 0;

void areal1 () {
    std::cout
        << (dPi * dRadius * dRadius)
        << std::endl;
}

void areal2 () {
    double lokalPi = 3.14159;
    std::cout
        << (lokalPi * dRadius * dRadius)
        << std::endl;
}

int main() {
    std::cout
        << "Tast inn radius på sirkel: "
        << std::endl;
    std::cin
        >> dRadius;
    std::cout
        << "Areal regnet ut med metode areal1 er: "
        << std::endl;
    areal1();
    std::cout
        << "Areal regnet ut med metode areal2 er: "
        << std::endl;
    areal2();
    system("pause");
}