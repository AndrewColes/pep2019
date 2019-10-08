#include <iostream>
using std::cout;
using std::endl;

template<typename T>
class template_array {
    
    
private:
        T * elements;
        int arraySize;
            
public:
        template_array(const int sizeIn)
        : elements(new T[sizeIn]), arraySize(sizeIn) {}
        
        ~template_array() {
                delete [] elements;
        }
        
        int size() const {
                return arraySize;
        }
        
        T & operator[](const int idx) {
            return elements[idx];
        }
};

int main() {
        template_array<int> someNumbers(10);
        
        for (int i = 0; i < someNumbers.size(); ++i) {
            someNumbers[i] = i;
        }

        for (int i = 0; i < someNumbers.size(); ++i) {
            cout << someNumbers[i] << "\n";
        }
        
        return 0;
}
