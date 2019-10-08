#include <iostream>
using std::cout;

int main() {
    int * someNumbers = new int[10];

    cout << someNumbers << "\n";
    cout << &(someNumbers[1]) << "\n";
    cout << &(someNumbers[2]) << "\n";
    
    int * fake_iterator = someNumbers;
    cout << fake_iterator << "\n";
   
    ++fake_iterator;
    cout << fake_iterator << "\n";
   
    ++fake_iterator;
    cout << fake_iterator << "\n";
   
    
    /*
    
    for (int i = 0; i < 10; ++i) {
        someNumbers[i] = i;
    }
    
    cout << someNumbers[0] << "\n";
    cout << someNumbers[1] << "\n";
    
    cout << *someNumbers << "\n";
 */   
    
}
