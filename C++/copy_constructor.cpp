#include<iostream>

using namespace std;

class area {
    private:
    int length, breadth;
    
    public:
    
    area(int l, int b):length(l), breadth(b) { }
    
    area(const area &other) {
        length = other.length;
        breadth = other.breadth;
    }
    
    int calc_area() {
        return length*breadth;
    }
};

int main() {
    area obj(10, 20);
    area newObj = obj;
    cout<<newObj.calc_area();
    return 0;
}
