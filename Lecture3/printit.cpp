#include <iostream>
#include <list>

using std::list;
using std::cout;

#include <string>
using std::string;

template<typename T>
void printIt(const T & toPrint) {
    for (auto & element : toPrint) {
        cout << element << "\n";
    }
}

class OhDear {
private:
    int x;
    int y;
    
public:
    
    int begin() const {
        return 0;
    }
    
    int end() const {
        return 1;
    }
};

int main() {

    list<int> numbers{1,2,3,4,5};
    printIt(numbers);

    string hello = "Hello";
    printIt(hello);
    
    //list<OhDear> ohdear;
    //printIt(ohdear);
    
    OhDear ohdear;
    
    printIt(ohdear);
}
