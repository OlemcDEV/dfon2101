#include <iostream>

void sumOf2 () {
    double tall1;
    double tall2;

    std::cout
        << "Sum of numbers, type first number: "
        << std::endl;
    std::cin
        >> tall1;

    std::cout
        << "Sum of numbers, second number: "
        << std::endl;
    std::cin
        >> tall2;

    std::cout
        << "Sum of these numbers is: "
        << (tall1 + tall2)
        << std::endl;

}

void sumOf2_withOperators() {
    char input1[9000];

    std::cout
        << "Type in the calculation f.example: 3.12+2.12 or -3.12-2.12"
        << std::endl;
    std::cin
        >>
        input1;
    std::cout
        << "Here's your calculation: "
        << input1
        << std::endl;
    std::cout
        << "Answer is: "
        

}

int main() {

    //DEL 1
    //sumOf2();

    //DEL 2
    sumOf2_withOperators();


    system("pause");


}