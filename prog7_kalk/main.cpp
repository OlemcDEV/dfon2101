#include <iostream>
#include <algorithm>
void sumOf2 () {
    double dNumber1;
    double dNumber2;

    std::cout
        << "Sum of numbers, type first number: "
        << std::endl;
    std::cin
        >> dNumber1;

    std::cout
        << "Sum of numbers, second number: "
        << std::endl;
    std::cin
        >> dNumber2;

    std::cout
        << "Sum of these numbers is: "
        << (dNumber1 + dNumber2)
        << std::endl;

}
char op;
int position;
int opCount;
double dNumber1;
double dNumber2;

void findOpCount(char array[]) {
    char x = 0;
    opCount;
    for (int i = 0; i < sizeof(array); i++) {
        x = array[i];
        switch (x) {
        case '+': opCount++;
            break;
        case '-': opCount++;
            break;
        case '*': opCount++;
            break;
        case '/': opCount++;
            break;
        }
    }
    std::cout
        << "op count/case: "
        << opCount
        << std::endl;
}
void findOpAndSplitAndDoTheMath(char array[]) {
    switch (opCount) {
    case 0:
        std::cout
            << array
            << std::endl;
        break;
    case 1:
        //Finne posisjonen til operatoren
        for (int i = 0; i <= sizeof(array[i]); i++) {
            if (array[i] = '+' || '-' || '*' || '/') {
                position = i;
                for (int j = 0; j < sizeof(array[j]); j++) {
                    position = i;
                }
                std::cout
                    //<< dNumber1
                    << std::endl;
            }
        }

        break;
    case 2:
        break;
    case 3:
        std::cout
            << "ERROR 001: For a calc a(+,-,*,/)b, "
            "it can't be more than 2 operators";
        break;
    }
}

void sumOf2_withOperator() {

    double dNumber1 = 0;
    double dNumber2 = 0;
    double answer = 0;
    char input1[100];

    std::cout
        << "Type in the calculation f.example: 3.12+2.12 or -3.12-2.12"
        << std::endl;
    std::cin
        >>
        input1;
    std::cout
        << "Here's what you want to calculate: "
        << input1
        << std::endl;

    findOpCount(input1);
    findOpAndSplitAndDoTheMath(input1);
}

int main() {

    //DEL 1
    //sumOf2();

    //DEL 2
    sumOf2_withOperator();

    system("pause");
}