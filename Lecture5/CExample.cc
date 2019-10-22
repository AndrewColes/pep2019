#include "Coordinate.h"

#include <vector>
#include <memory>

using std::vector;
using std::unique_ptr;

class Bikes : public Coordinate {
    
public:
    int howMany;
    
public:
    Bikes(const int xIn, const int yIn, const int howManyIn)
        : Coordinate(xIn, yIn),
          howMany(howManyIn) {
              
    }
    
    virtual void printDetails() const override {
        Coordinate::printDetails();
        std::cout << ": " << howMany << " bikes";
    }
    
};


using std::cout;

void someFunction(const Coordinate & c) {
    c.printDetails();
    cout << "\n";
}


int main() {
    cout << sizeof(Coordinate) << "\n";
    
    Coordinate c(1,2);
    
    /*cout << &c << "\n";
    cout << &(c.x) << "\n";
    cout << &(c.y) << "\n";*/
    
    
    Bikes someBikes(30,40,20);
    
    /*cout << &someBikes << "\n";
    cout << &(someBikes.x) << "\n";
    cout << &(someBikes.y) << "\n";
    cout << &(someBikes.howMany) << "\n";*/
    
    //c.printDetails(); cout << "\n";
    
    someBikes.printDetails(); cout << "\n";
    someFunction(someBikes);
    
    vector<unique_ptr<Coordinate> > someThings;
    someThings.emplace_back(new Bikes(20,11,9001));
    
}
