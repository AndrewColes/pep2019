#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

class double_array {
    
    
private:
        double * elements;
        int arraySize;
            
public:
        double_array(const int sizeIn)
        : elements(new double[sizeIn]), arraySize(sizeIn) {}
        
        ~double_array() {
                delete [] elements;
        }
        
        int size() const {
                return arraySize;
        }
        
        double & operator[](const int idx) {
            return elements[idx];
        }
};

void addOneToEverything(vector<int> & toAddTo) {
    for (int & element : toAddTo) {
        element += 1;
    }
}

int main() {
        /*double_array someNumbers(10);
        
        for (int i = 0; i < someNumbers.size(); ++i) {
            someNumbers[i] = i + 0.1;
        }

        for (int i = 0; i < someNumbers.size(); ++i) {
            cout << someNumbers[i] << "\n";
        }*/
        
        vector<int> someMoreNumbers{1,2,3,4,5};
        addOneToEverything(someMoreNumbers);
        
        for (int & toPrint : someMoreNumbers) {
            cout << toPrint << "\n";
        }
}
