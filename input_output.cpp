#include <iostream>
#include <string>

using namespace std;


int numVowels(string s) {

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
            || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                count++;
        }
    }

    return count;
}


int main() {

    std::string firstname;
    std::string fullname;
    int age;

    std::cout << "Please enter your first name and age, separated by a space. ";
    std::cin >> firstname >> age;  // multiple inputs separated by single space, goes to each var

    std::cout << "Please enter your full name, with space(s). ";
    cin.ignore();  // ignore trailing newline from previous input
    std::getline(std::cin, fullname);  // comes from <string>, allows entry with
                                       // spaces without going to multiple args
    
    int full_count = numVowels(fullname);

    cout << "Hello, " << firstname << ". You are " << age << 
        " years old and your fullname has " << full_count << " vowels.";
}