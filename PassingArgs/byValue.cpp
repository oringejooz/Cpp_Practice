#include <iostream>

int swap(int a,int b){
    int temp;
    temp =a;
    a=b;
    b=temp;
    return a,b;
}

int main(){
    swap(3,4);
    int x=10,y=20;
    swap(x,y);
    std::cout << x;
}
