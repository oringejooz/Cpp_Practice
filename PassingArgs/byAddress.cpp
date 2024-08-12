#include <iostream>

void Swap(int *a,int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;    
}

int main(){
    int x =10,y=20;
    Swap(&x,&y);
    std::cout << "Hello World";
    return 0;
}