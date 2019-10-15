#include <iostream>

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
    

    Coordinate operator+(Coordinate other) const {
        return Coordinate(x + other.x, y + other.y);
    }
    
    int operator*(Coordinate other) const {
        return x * other.x + y * other.y;
    }
    
    Coordinate operator*(int scaleFactor) {
        return Coordinate(x * scaleFactor, y * scaleFactor);
    }
    
    
};


std::ostream & operator<<(std::ostream & o, const Coordinate & c) {
    o << c.getX() << "," << c.getY();
    return o;
}

