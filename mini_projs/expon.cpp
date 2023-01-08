#include <iostream>
#include <format>
#include <string>

// reimplement the e^x function for all real x using the Maclaurin series

long double exp(long double x) {

    long double total = 0;
    long double prod = 1;
    int n = 0;

    do {
        prod *= (2.0 / (n == 0 ? 1 : n));  // prevent inaccuracy by multiplying cumulatively
        total += prod;
        n++;
    } while (prod >= 1e-15);

    return total;
}

int main() {
    
    std::string x_str;
    std::cout << "Enter a number to take the exponential of: " << std::endl;
    std::cin >> x_str;
    long double x = std::stold(x_str);
    long double y = exp(x);
    std::cout << "The exponential of " << x << " is " << y << std::endl;
}