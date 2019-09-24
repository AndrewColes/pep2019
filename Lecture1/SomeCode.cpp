#include <iostream>
using std::cout;

void printAnswer(int x) {
    cout << "The answer to life, the universe and everything is " << x << "\n";
}

int answer();

int main() {
    printAnswer(answer());
    return 0;
}

int answer() {
    return 42;
}
