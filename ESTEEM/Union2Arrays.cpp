#include <iostream>
#include<vector>
#include<set>
#include<unordered_set>

using namespace std;

class Solution{
    public:
        int doUnion(vector<int> arr1,vector<int> arr2){
            unordered_set<int>s;
            for(int i=0;i<arr1.size();i++){
                s.insert(arr1[i]);
            }
            for(int i=0;i<arr2.size();i++){
                s.insert(arr2[i]);
            }
            return s.size();
        }
};