#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void foo(const vector<int> & a) {
    cout << a[0] << "\n";
    a[0] += 7;
}

int main() {

    vector<int> numbers(5);
    for (int i = 0; i < numbers.size(); ++i) {
        numbers[i] = i;
    }
    
    foo(numbers);

}
