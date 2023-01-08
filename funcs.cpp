#include <iostream>
#include <string>

using namespace std;


int addTwoNums(int a, int b) {
    return a + b;
}


int main() {
    string num1;
    string num2;
    string again;
    do {
        cout << "Enter first num: ";
        cin >> num1;
        cout << "Enter second num: ";
        cin >> num2;
        
        int sum_val = addTwoNums(stoi(num1), stoi(num2));
        cout << num1 << " + " << num2 << " = " << sum_val << "." << endl;

        cout << "Again? (y/n): ";
        cin >> again;
    } while (again == "y");
}