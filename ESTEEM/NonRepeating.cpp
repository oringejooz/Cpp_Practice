#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        unordered_map<int,int> fmap;
        for(auto i:arr){
            fmap[i]++;
        }
        for(auto i : arr){
            if(fmap[i]==1){
                return i;
            }
        }
        return 0;
    }
};
