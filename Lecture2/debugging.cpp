#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> numbers{1,2,3,4,5};

    for (int i = 0; i <= 5; ++i) {
        cout << numbers[i] << "\n";
    }

}
