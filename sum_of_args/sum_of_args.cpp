#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

    int total = 0;

    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            total += stoi(argv[i]);  // string to integer, increment total
        }
    } else {
        cout << "There were no args." << endl;
        return 0;
    }

    cout << "Sum of args is " << total << endl;
    return 0;
}