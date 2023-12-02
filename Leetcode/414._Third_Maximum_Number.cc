#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin() , nums.end() , greater<int>());

        if(nums.size() < 3){
            return nums[0];
        }

        int maxcntr = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] != nums[i-1]){
                maxcntr++;
            }
            if(maxcntr==3){
                return nums[i];
            }
        }

        return nums[0];
    }
};