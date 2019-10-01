#include <vector>
using std::vector;

#include <cstdlib>

class BCVector {
    
private:
    vector<int> elements;
    
public:
    BCVector() : elements() {
        
    }
    
    BCVector(const int s) : elements(s) {
        
    }
    
    int size() const {
        return elements.size();
    }
    
    int & operator[](const int i) {
        if (i < 0) {
            abort();
        }
        if (i >= size()) {
            abort();
        }
        
        return elements[i];
    }
    
    const int & operator[](const int i) const {
        if (i < 0) {
            abort();
        }
        if (i >= size()) {
            abort();
        }
        
        return elements[i];
    }
};

int main() {
    
    //BCVector numbers(5);
    vector<int> numbers(5);
    
    
    
    numbers[0] = 0;
    numbers[1] = 1;
    numbers[2] = 2;
    numbers[3] = 3;
    numbers[4] = 4;
    numbers[5] = 5;
}
