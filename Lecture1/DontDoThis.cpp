#include <vector>
using std::vector;

#include <iostream>
using std::cout;

int main() {
    vector<int> numbers(6);
    for (int i = 0; i < 6; ++i) {
        numbers[i] = i;
    }
    for (int i = 0; i < 6; ++i) {
        cout << numbers[i] << "\n";
    }
    int x;
    if (x > 1000000) {
        cout << "Sure\n";
    }
    return 0;
}
