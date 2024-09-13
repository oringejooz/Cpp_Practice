#include <iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int MissingNum(vector<int>& arr){
            int len = arr.size();
            int res=len*(1+len)/2;
            int sum=0;
            for(int i=0;i<len;i++){
                sum=sum+arr[i];
            }
            int x = res-sum;
            return x;
        }
};