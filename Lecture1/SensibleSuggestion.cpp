#include <iostream>
using std::cout;

#include <vector>
using std::vector;

#include <cmath>

int fib(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    
    return fib(n-1) + fib(n-2);
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    int limit = sqrt(n);

    for (int divisor = 2; divisor <= limit; ++divisor) {
        if ((n % divisor) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> numbers(10);
    for (int i = 0; i < 10; ++i) {
        numbers[i] = fib(i);
    }
    for (int i = 0; i < 10; ++i) {
        if (!isPrime(numbers[i])) {
            cout << numbers[i] << " is fibonacci but not prime\n";
        } else {
            cout << numbers[i] << " to keep the black t shirt person happy\n";
        }
    }
    
    int x = 4.2; // this works in C++ but not in Java
}
