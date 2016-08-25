#include <iostream>
#include <algorithm>
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
char op;
int position;

int findOp (char stykke[]) {
    position;
    op;
    for (int i = 0; i < sizeof(stykke); i++) {
        if (stykke[i] == '+') {
            std::cout
                << "Vi fant et + tegn."
                << std::endl;
            position = i;
            op = '+';
            return op,position;
        }
        else if (stykke[i] == '-') {
            std::cout
                << "Vi fant et - tegn."
                << std::endl;
            position = i;
            op = '-';
            return op, position;
        }
        else if (stykke[i] == '*') {
            std::cout
                << "Vi fant et * tegn."
                << std::endl;
            position = i;
            op = '*';
            return op, position;
        }
        else if (stykke[i] == '/') {
            std::cout
                << "Vi fant et / tegn."
                << std::endl;
            position = i;
            op = '/';
            return op, position;
        }
    }
}

void sumOf2_withOperator() {

    double tall1 = 0;
    double tall2 = 0;
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
    findOp(input1);
    if (op == '+') {
        std::cout
            << "We know there's a + sign in method sumOf2_withOperator"
            << std::endl
            << "position to the operator is: "
            << position
            << std::endl;
    }
    else if (op == '-') {
        std::cout
            << "We know there's a - sign in method sumOf2_withOperator"
            << std::endl
            << "position to the operator is: "
            << position
            << std::endl;
    }
    else if (op == '*') {
        std::cout
            << "We know there's a * sign in method sumOf2_withOperator"
            << std::endl
            << "position to the operator is: "
            << position
            << std::endl;
    }
    else if (op == '/') {
        std::cout
            << "We know there's a / sign in method sumOf2_withOperator"
            << std::endl
            << "position to the operator is: "
            << position
            << std::endl;
    }
    std::cout
        << "Hei.....................................";
    for (int i = 0; i < sizeof(input1); i++) {
        do {
            tall1 += input1[i];
        } while (i != position);

        std::cout
            << "hei 2";

        do {
            tall2 += input1[position + i];
        } while (i != sizeof(input1));
    }
    std::cout
        << "Hei";

    switch (op) {
    case '+': answer = tall1 + tall2;
        std::cout
            << answer
            << std::endl;
        break;
    }

    
}

int main() {

    //DEL 1
    //sumOf2();

    //DEL 2
    sumOf2_withOperator();

    system("pause");


}