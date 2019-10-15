#include <iostream>
using std::cout;

void increment(const double & d) {
    cout << d << "\n";
}

int main() {
    int x = 7;
    increment(x);
}
