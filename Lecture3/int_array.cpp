#include <iostream>
using std::cout;
using std::endl;


class int_array {
    
    
private:
        int * elements;
        int arraySize;
            
public:
    
        class iterator {
            
        private:
                int * currentElement;
                
        public:
            
                iterator(int * ptrIn) : currentElement(ptrIn) {}
                
                int & operator*() {
                        return *currentElement;
                }
                
                void operator++() {
                        ++currentElement;
                }
                
                
                iterator operator+(const int x) const {
                    return iterator(currentElement + x);
                }
                
                
                iterator operator++(int) {
                        iterator t = *this;
                        ++currentElement;
                        return t;
                }
                
                bool operator!=(const iterator & other) const {
                    return currentElement != other.currentElement;
                }
                
                bool operator==(const iterator & other) const {
                    return currentElement == other.currentElement;
                }
                
        };
    
        int_array(const int sizeIn)
        : elements(new int[sizeIn]), arraySize(sizeIn) {}
        
        ~int_array() {
                delete [] elements;
        }
        
        int size() const {
                return arraySize;
        }
        
        int & operator[](const int idx) {
            return elements[idx];
        }
        
        iterator begin() {
            return iterator(elements);
        }
        
        iterator end() {
            return iterator(elements + size());
        }
};

int main() {
        int_array someNumbers(10);
        
        for (int i = 0; i < someNumbers.size(); ++i) {
            someNumbers[i] = i;
        }

        for (int i = 0; i < someNumbers.size(); ++i) {
            cout << someNumbers[i] << "\n";
        }
        
        auto itr = someNumbers.begin();
        auto itrEnd = someNumbers.end();
        
        while (itr != itrEnd) {
            auto & wow = *itr;
            
            cout << wow << "\n";
            ++itr;
        }
        
        for (auto & wow : someNumbers) {
            cout << wow << "\n";
        }
        
        
        auto elementTwo = someNumbers.begin() + 2;
        
        return 0;
}
