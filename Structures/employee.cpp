#include <iostream>
using namespace std;

struct Employee{
    int id;
    char name[20];
    float salary;
};

int main(){
    Employee obj;
    obj.id = 12;
    cout<<"Hello World";
    return 0;
}