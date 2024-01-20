#include<iostream>

using namespace std;

void swap_nonpointer(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void swap_pointer(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 10, b = 20;
    cout<<a<<" "<<b<<endl;
    swap_nonpointer(a,b);
    cout<<a<<" "<<b<<endl;
    swap_pointer(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}
