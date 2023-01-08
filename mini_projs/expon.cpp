#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

// reimplement the e^x function for all real x using the Maclaurin series

long double my_exp(long double x) {  // maximise precision using long doubles

    long double total = 0;
    long double prod = 1;
    int n = 0;

    do {
        prod *= (n == 0 ? 1 : x / n);  // ternary operator for avoiding division by zero
        total += prod;
        n++;
    } while (fabs(prod) >= 1e-15);  // answer tolerance

    return total;
}

int main() {
    
    std::cout << std::setprecision(16);  // set viewing precision
    std::string x_str;
    while (true) {
        std::cout << "Enter a number to take the exponential of: ";
        std::cin >> x_str;
        long double x = std::stold(x_str);
        long double y = my_exp(x);
        std::cout << "The exponential of " << x << " is " << y << std::endl;
    }
}