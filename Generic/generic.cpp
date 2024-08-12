#include <iostream>

template <class G>

G myFunc(G a,G b){
    return a*b;
}


int main(){
    
    std::cout<<myFunc(2.45,1.0)<<std::endl;
    std::cout<<myFunc(2,10);
    
    return 0;
}