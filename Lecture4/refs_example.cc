int & someFunction() {
    int a = 3;
    int & b = a;
    return b;
}


int main() {
    int & x = someFunction();
    x += 7;
}
