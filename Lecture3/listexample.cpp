#include <list>
using std::list;

#include <iostream>
using std::cout;

int main() {
    list<int> numbers{2,4,6,8,10};
    
    for (int e : numbers) { cout << e << "\n"; }
    
    auto itr = numbers.begin();
    ++itr;
    ++itr;
    
    cout << *itr << "\n";
    
    auto myNewNode = numbers.insert(itr, 5);
    
    cout << *myNewNode << "\n";
    
    for (int e : numbers) { cout << e << "\n"; }
    
}
