#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> numbers{1,2,3,4,5};

    int biggest = numbers[0]; // this is the problem
    
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << "\n";
        cout << biggest << "\n";
        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }
    }
    
    cout << biggest << "\n";

}
