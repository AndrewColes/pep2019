#include "Coordinate.h"

#include <vector>
#include <memory>

using std::vector;
using std::unique_ptr;

#include <string>
using std::string;

class StreetAddress {
  
protected:
    string postcode;
    int streetNumber;
    
public:
    
    StreetAddress(const string & pcIn, const int sn)
        : postcode(pcIn), streetNumber(sn) {
            
    }
    
    virtual void printDetails() const {
        std::cout << postcode << ", #" << streetNumber;
    }
};

class Bikes : public Coordinate, public StreetAddress {
    
public:
    int howMany;
    
public:
    Bikes(const int xIn, const int yIn,
          const string & pcIn, const int sn,
          const int howManyIn)
        : Coordinate(xIn, yIn),
          StreetAddress(pcIn, sn),
          howMany(howManyIn) {
              
    }
    
    virtual void printDetails() const override {
        Coordinate::printDetails();
        std::cout << "; ";
        StreetAddress::printDetails();
        std::cout << " - " << howMany << " bikes\n";
    }
    
};

class SomeOtherClass {
    
private:
    double foo;
    
public:
    
    virtual void ohDear() {
        std::cout << "The cake is a lie\n";
        std::cout << foo << "\n";
    }
};


using std::cout;

void someFunction(Coordinate * c) {
    
    
    // don't do this
    // really don't
    /*
     * SomeOtherClass donor;
    
    auto vtableptr = *((void**) &donor);    
    *((void**) c) = vtableptr;*/
    
    c->printDetails();
    cout << "\n";
}


int main() {
    /*
    Coordinate c(1,2);
    
    cout << &c << "\n";
    cout << &(c.x) << "\n";
    cout << &(c.y) << "\n";

    auto wait_what = (void**) &c;
    
    cout << *(wait_what) << "\n";
    
    Coordinate d(3,4);
    
    cout << *((void**) &d) << "\n";
    
    
    
    cout << *((void**) &someBikes) << "\n";
    
    
    someFunction(&c);
    */
    Bikes someBikes(3,4,"WC2R 4BG",16,100);
    
    //someBikes.printDetails(); cout << "\n";
    someFunction(& someBikes);
}
