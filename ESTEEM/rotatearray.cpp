/*

arr = 1 2 3 4 5
d = 2
op = 3 4 5 1 2


Juggling Algorithm
1) Reverse an array 0 to d-1
reverse(arr,0,d-1);
2)reverse(arr,d,n-1);
3)reverse(arr,0,n-1);

d=2
arr = 1 2 3 4 5
left rotation
1 ---> arr 0 2-1 reverse
2 1 3 4 5

2---> arr 2 5-1
2 1 5 4 3

3---> reverse full array
3 4 5 1 2

Right rotation conditions
d=2
1 2 3 4 5

*/

#include <iostream>
#include<vector>

using namespace std;

int main(){
    // vector<int> v = {}
}



