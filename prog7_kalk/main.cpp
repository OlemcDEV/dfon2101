#include <iostream>
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
int factorialForLoop(int n) {

    for (int i = n-1; i > 1; i--) {
        n *= i;
        
    }
    return n;
}

long int factorialRecursive (int n) {

    return (n == 1 || n == 0) ? 1 : factorialRecursive(n - 1) * n;
}

void factorizing(int n) {

    int devisor = 2;
    while (devisor <= n) {
        if (n % devisor == 0) {
            std::cout
                << devisor 
                << " ";
            n /= devisor;
        }
        else if (devisor >= 3) {
            devisor += 2;
        }
        else {
            devisor++;
        }
    }
}

void calc() {

    double dNumber1;
    char op;
    double dNumber2;
    double answer;
    
    std::cout
        << std::endl
        << "For simple math: 3.12+2.12 or -3.12-2.12 Operators: +,-,*,/"
        << std::endl
        << "For factorial: n!"
        << std::endl
        << "For factorizing: n#"
        << std::endl;
    std::cin
        >> dNumber1
        >> op;

    std::cout
        << "Here's what you want to calculate: "
        << dNumber1
        << op;

    if (op == '!') {
        std::cout
            << std::endl
            << "FactorialForLoop(): "
            << factorialForLoop((int)dNumber1)
            << std::endl
            << "FactorialRecursive(): "
            << factorialRecursive((int)dNumber1)
            << std::endl;
    }

    else if (op == '#') {
        std::cout
            << std::endl;
            factorizing((int)dNumber1);
    }
    //Do normal math
    else {
        std::cin
        >> dNumber2;

        std::cout
            << dNumber2
            << std::endl;

        switch (op) {
        case '+':
            answer = (dNumber1 + dNumber2);
            break;
        case '-':
            answer = dNumber1 - dNumber2;
            break;
        case '*':
            answer = dNumber1 * dNumber2;
            break;
        case '/':
            answer = dNumber1 / dNumber2;
            break;
        }
        std::cout
            << answer
            << std::endl;
    }
}

int main() {

    //DEL 1
    //sumOf2();

    //DEL 2,3,4,5,6 og 7
    do {
        calc();
    } while (true);
}