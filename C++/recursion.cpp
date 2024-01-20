// write a recursive function to print the following sequence: "1 2 1 3 1 2 1 4 1 2 1 3 1 2 1"

#include<iostream>

using namespace std;

void seq(int num) {
    if(num>0) {
        seq(num-1);
        cout<<num<<" ";
        seq(num-1);
    }
}

int main(){
    seq(4);
    return 0;
}
