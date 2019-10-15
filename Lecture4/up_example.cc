#include <memory>
using std::unique_ptr;

#include "Coordinate.h"


unique_ptr<Coordinate> someFunction() {
    return unique_ptr<Coordinate>(new Coordinate(1,2));
}

int main() {
    unique_ptr<Coordinate> a;
    
    a = someFunction();
    
    std::cout << *a << "\n";
    
}
