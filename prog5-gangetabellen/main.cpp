#include <iostream>
#include <string>
using namespace std;

int main() {
    //enum tallType {oddeTall, parTall}; Hvordan kan jeg bruke dette?
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i*j % 2 == 0 || i*j % 2 == 1) {
                cout
                    << (i*j) << " ";
            }
        }
        cout
            <<
            endl;
    }
    system("pause");
}