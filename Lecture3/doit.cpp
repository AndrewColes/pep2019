#include <iostream>

int main() {
	double * x = new double(42);
	int * y = (int*) x;
    
    std::cout << *y << "\n";
    ++y;
    std::cout << *y << "\n";
    
}
