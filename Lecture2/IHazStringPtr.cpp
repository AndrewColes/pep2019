#include <string>
#include <iostream>

using std::cout;
using std::string;

class IHazStringPtr {
  
private:
    
    string * s;
    
public:
    
    IHazStringPtr()
        : s(new string()) {
    }
    
    void addCharacter(const char c) {
        s->push_back(c);
    }
    
    void printIt() {
        cout << *s << "\n";
    }
};

int main() {
    IHazStringPtr spA;
    IHazStringPtr spB = spA;
    
    spA.addCharacter('A');
    spB.addCharacter('B');
    
    spA.printIt();
    spB.printIt();
}
