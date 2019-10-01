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
    
    IHazStringPtr(const IHazStringPtr & other)
        : s(other.s == nullptr
            ? nullptr
            : new string(*(other.s))) {
    }
    
    ~IHazStringPtr() {
        delete s;
    }
    
    void addCharacter(const char c) {
        s->push_back(c);
    }
    
    void printIt() {
        cout << *s << "\n";
    }
    
    IHazStringPtr & operator=(const IHazStringPtr & other) {
        cout << "Using the assignment operator\n";
        delete s;
        if (other.s == nullptr) {
            s = nullptr;
        } else {
            s = new string(*(other.s));
        }
        
        return *this;
    }
};

int main() {
    IHazStringPtr spA;
    IHazStringPtr spB;
    
    spB = spA;
    
    spA = spA;
    
    spA.addCharacter('A');
    spB.addCharacter('B');
    
    spA.printIt();
    spB.printIt();
}
