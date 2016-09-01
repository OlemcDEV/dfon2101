#include "test.h"
int main() {
    test obj1(2,3);
    obj1.sumOf2Ints();
    obj1.print();

    test obj2(5, 6);
    obj2.sumOf2Ints();
    obj2.print();

    system("pause");
}