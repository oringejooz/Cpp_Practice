#include<iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        
        while (numSet.count(original)) {
            original *= 2;
        }
        
        return original;
    }
};

//largest subarray with 0 sum geeks for geeks - next quest