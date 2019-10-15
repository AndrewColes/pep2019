int main() {
    unique_ptr<Coordinate> a(new Coordinate(3,4));
    unique_ptr<Coordinate> b(new Coordinate(2,3));

    // a = b; // does not work
    
    a = unique_ptr<Coordinate>(new Coordinate(4,7));
    
}
