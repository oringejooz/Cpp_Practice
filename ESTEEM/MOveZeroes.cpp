#include <iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        void moveZeroes(vector<int>& nums){
            int i=0,j=0;
            for(int j;j<nums.size();j++){
                if(nums[j]!=0){
                    swap(nums[i],nums[j]);
                    i++;
                }
            }
            

        }
};

//input: [0,1,0,3,12]
//output: [1,3,12,0,0]
//no making copies of the array