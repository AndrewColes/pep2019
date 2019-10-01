#include <iostream>
using std::cout;

#include <string>
using std::string;

int main() {

    string * a = new string("Dave");
    string * b = new string("Dave");
    
    cout << a << "\n";
    cout << b << "\n";
    
    if (a == b) {
        cout << "Dave is Dave\n";
    }
    
    if (*a == *b) {
        cout <<  "Dave is Dave, again\n";
    }
    
    string * c = a;
    
    cout << c << "\n";
    
    
    if (a == c) {
        cout << "Dave A is Dave C\n";
    }
    
}
