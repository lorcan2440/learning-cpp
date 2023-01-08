#include <iostream>
#include <cstring>
#include <string>
#include <vector>  // STL (standard template library) object


int main() {

    int a1;  // integer: whole number
    // unsigned values must be positive, can store twice as large as signed (1 extra bit)
    // number of bits used depends on platform https://en.cppreference.com/w/cpp/language/types
    // on windows 64 using LLP64:
    unsigned int a2;  // max value 2^32 - 1 = 4294967295
    unsigned long long int a4;  // max value 2^64 - 1 = 18446744073709551615
    auto a5 = 120ull;  // can also add suffixes then infer type

    float b1;  // floating point number: decimals. 32 bit precision
    double b2;  // 64 bit precision
    long double b3;  // 128 bit precision

    char c1 = 'c';  // single character
    std::string c2 = "abcdef";  // string is a collection of chars, must use "". Alternative to char *c2

    // string methods
    const char *c2arr = c2.c_str();  // convert to static character array
    std::vector<char> chars(c2.c_str(), c2.c_str() + c2.size() + 1);  // vector of chars: use &chars[0] as char*
}


