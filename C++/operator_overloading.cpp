#include<iostream>

using namespace std;

class img_sum {
    private:
        int real, img;
        
    public:
        img_sum() {
            real=0;
            img=0;
        }
        img_sum(int r, int i): real(r), img(i) { }
        
        img_sum operator+ (img_sum const &other) {
            img_sum obj;
            obj.real=real+other.real;
            obj.img=img+other.img;
            return obj;
        }
        void display() {
            cout<<real<<" "<<img;
        }
};

int main() {
    img_sum obj1(10,20), obj2(30,20);
    img_sum obj3 = obj1+obj2;
    obj3.display();
    return 0;
}
