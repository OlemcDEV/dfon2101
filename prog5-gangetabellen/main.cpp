#include <iostream>
#include <string>
using namespace std;

int main() {
    enum tallType {parTall, oddeTall}; //Hvordan kan jeg bruke dette?
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
			if (i*j % 2 == tallType{ oddeTall } || i*j % 2 == tallType{ parTall }) {
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