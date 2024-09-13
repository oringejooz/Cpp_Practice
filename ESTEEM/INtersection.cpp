#include <iostream>
#include<vector>
#include<set>
#include<unordered_set>

using namespace std;

class Solution{
    public:
        int doIntersection(vector<int> arr1,vector<int> arr2){
            unordered_set<int>s1(arr1.begin(),arr1.end());
            int count=0;
            
            for(int i=0;i<arr2.size();i++){
                if(s1.find(arr2[i])!=s1.end()){
                    count++;
                    auto it = s1.find(arr2[i]);
                    s1.erase(it);
                }
            }
            return count;
        }
};