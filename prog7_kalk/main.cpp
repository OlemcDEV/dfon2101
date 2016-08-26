#include <iostream>
#include <stdlib.h>
#include <string>

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
double position;
int opCount;
double dNumber1;
double dNumber2;

//Function to find how many operators (+,-,*,/) there are in the array
void findOpCount(char array[]) {
    char x = 0;
    opCount;
    for (int i = 0; i < strlen(array); i++) {
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

/*
Function to find the operator closest to middle, split the numbers on each
side of the operator Example: (22.2)+(33.3) into 2 variables for so to 
calculate the 2 variables depending on which operator is current.
*/
void findOpAndSplitAndDoTheMath(char array[]) {
    position;
    std::string str1;
    std::string str2;
    switch (opCount) {
    case 0:
        std::cout
            << array
            << std::endl;
        break;
        //case1 = when there's only 1 operator in the input
    case 1: {
        //Finding the index of operator and what kind of operator it is
        for (int j = 0; j < strlen(array); j++) {
            char x = array[j];
            switch (x) {
            case '+':
                position = j;
                break;
                op = '+';
            case '-':
                position = j;
                break;
                op = '-';
            case '*':
                position = j;
                break;
                op = '*';
            case '/':
                position = j;
                break;
                op = '/';
            }
        }
        /* NOT CURRENTLEY WORKING!!!
        Problems are starting here.. Trying to solve the mystery of how to
        split calculation into 2 variables */
        char dArray1[100];
        char dArray2[100];
        for (int i = 0; i < position; i++) {
            dArray1[i] = array[i];
        }
        for (int i = position+1; i < 100-position; i++) {
            dArray2[i] = array[i];
        }
        str1 = std::string(dArray1);
        str2 = std::string(dArray2);
        std::cout
            << str1
            //<< str2
            << std::endl;
    }
        std::cout
            << "Index of op: "
            << position
            << std::endl
            << "dNumber1: "
            << dNumber1
            << std::endl
            << "dNumber2: "
            << dNumber2
            << std::endl;
        break;
    case 2:
        break;
    default:
        std::cout
            << "ERROR 001: For a calc a(+,-,*,/)b, "
            " where a and b are positive, it can't be more than 2 operators"
            << std::endl;
        break;
        }
}

int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

void calc() {

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

    

    //Do factorial - funker bare med et siffer så langt
    if (input1[1] == '!') {

        int c = int(input1[0] - '0');
        std::cout
            << "Factorial of "
            << c
            << " is: "
            << factorial(c)
            << std::endl;
    }
    //Do normal job
    else {
        findOpCount(input1);
        findOpAndSplitAndDoTheMath(input1);
    }

}

int main() {
    //DEL 1
    //sumOf2();

    //DEL 2,3,4 og 5
    calc();

    //DEL 6
    //DEL 7
    system("pause");
}