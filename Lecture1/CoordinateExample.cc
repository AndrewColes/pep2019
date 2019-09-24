#include <iostream>
using std::cout;
using std::ostream;

#include <vector>
using std::vector;

class Coordinate {
    
protected:
    int x;
    int y;
    
public:
    
    Coordinate(int xIn, int yIn)
        : x(xIn), y(yIn) {
            
    }
    
    int getX() const {
        return x;
    }
    
    int getY() const {
        return y;
    }
    
    void setX(int xIn) {
        x = xIn;
    }
    
    bool operator==(const Coordinate & other) const {
        return (x == other.x && y == other.y);
    }
    

    Coordinate operator+(Coordinate other) {
        return Coordinate(x + other.x, y + other.y);
    }
    
    int operator*(Coordinate other) {
        return x * other.x + y * other.y;
    }
    
    Coordinate operator*(int scaleFactor) {
        return Coordinate(x * scaleFactor, y * scaleFactor);
    }
    
    
};


ostream & operator<<(ostream & o, const Coordinate & c) {
    o << c.getX() << "," << c.getY();
    return o;
}

class Journey {
  
protected:
    
    Coordinate from;
    Coordinate to;
    
public:
    
    Journey(Coordinate fromIn, Coordinate toIn)
        : from(fromIn), to(toIn)
    {
        
    }
};

void moveXToZero(Coordinate & in) {
    in.setX(0);
}

void printX(const Coordinate & in) {
    cout << in.getX() << "\n";
}

int main() {
    Coordinate a(4,-3);
    Coordinate b = a;
    
    cout << a.getX() << "\n";
    cout << b.getX() << "\n";
    
    a.setX(8);
    cout << a.getX() << "\n";
    cout << b.getX() << "\n";
    
    Journey j(a,b);
    
    Coordinate d(10,8);
    Coordinate e(10,8);
    
    if (d == e) {
        cout << "d equals e\n";
    }

    cout << "Before, a.x was " << a.getX() << "\n";
    moveXToZero(a);
    cout << "After, a.x was " << a.getX() << "\n";
    
    printX(a);
    
    cout << a << "\n";
    
    
    return 0;
}
