#include "test.h"

test::test(int iNumb1,int iNumb2) {
    this->iNumb1 = iNumb1;
    this->iNumb2 = iNumb2;
    this->iAnswer == 0;
}

void test::print() {
    std::cout
        << iNumb1
        << std::endl
        << iNumb2
        << std::endl;

    if (iAnswer != 0) {
        std::cout
            << iAnswer
            << std::endl
            << std::endl;
    }
}

void test::sumOf2Ints () {
    iAnswer = (iNumb1 + iNumb2);
}