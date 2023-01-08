#include <iostream>

using namespace std;  // can shorten e.g. std::cout to just cout

// type & .\"command_line_args.exe" followed by some args in CLI to run

int main(int argc, char **argv) {  // argc: argument count, argv: argument vector (character array / string)
    cout << "Number of args passed: " << argc << endl;

    for (int i = 0; i < argc; i++)  // for loop starting from 0, going to argc, incrementing
        cout << "Passed in " << argv[i] << endl;

}