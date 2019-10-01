#include <iostream>
using std::cout;

class SomeClass {

private:
    int x;
    int y;
    
public:
    
    SomeClass(const int xIn, const int yIn)
        : x(xIn), y(yIn) {
        // this is empty :)
    }
    
    SomeClass() = default;
    
    SomeClass(const SomeClass & toCopy)
        : x(toCopy.x), y(toCopy.y) {
            
        cout << "Look ma, I did a copy!\n";
    }
    
    SomeClass & operator=(const SomeClass & toCopy) {
        x = toCopy.x;
        y = toCopy.y;
        
        cout << "Assignment happened\n";
        
        return *this;
    }
};

int main() {
    SomeClass sc(10,10);
    ///  here, sc is an object of type SomeClass
    
    SomeClass anotherOne = sc;
    
    SomeClass foo(8,8);
    
    anotherOne = foo;
    
}
