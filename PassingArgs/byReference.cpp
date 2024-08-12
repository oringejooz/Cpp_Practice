#include <iostream>

void add(int &a,int &b){
    std::cout << a+b << std::endl;
}

int main(){
    int x=35,y=12;
    add(x,y);
    std::cout<<"Finish";
    return 0;
}