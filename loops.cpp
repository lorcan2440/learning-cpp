#include <iostream>

using namespace std;


int main() {

    for (int i = 3; i >= -3; i -= 2) {  // init, set condition to run, define change per loop
        cout << "Number " << i << endl;
    }

    string ans;
    while (ans != "Hello") {  // check first then run code
        cout << "Say hello!" << endl;
        cin >> ans;
    }

    int j = 0;
    do {
        j += 5;
        cout << j << " ";
    } while (j < 30);  // run code first then check
}