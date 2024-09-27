
//Ist Approach 
/*

class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int, int> freqMap;
        int n = nums.size();
        
        for (int num : nums) {
            freqMap[num]++;
        }
        
        for (const auto& pair : freqMap) {
            if (pair.second > n / 2) {
                return pair.first;
            }
        }
        
        return -1;
    }
};

*/

/*
Moore Voting Algo

arr = 2 2 1 1 1 2 2

element = 2
count = 1

i = 6


if 2 ka occurance > n/2
*/
