#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Simple factorial using 64-bit unsigned integer.
// Valid for n in [0, 20]. Larger n will overflow unsigned long long.
unsigned long long factorial(unsigned int n) {
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int main() {
    cout << "Enter a non-negative integer (0-20): ";
    long long n;
    if (!(cin >> n)) {
        cout << "Invalid input\n";
        return 1;
    }
    if (n < 0) {
        cout << "Negative numbers do not have factorials (in this program).\n";
        return 1;
    }
    if (n > 20) {
        cout << "Result will not fit into unsigned long long. Please use a smaller number (<=20).\n";
        return 1;
    }

    cout << n << "! = " << factorial(static_cast<unsigned int>(n)) << endl;
    return 0;
}