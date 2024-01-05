#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int cntr = 0 , ans = 0 , strt = 0, end = 0;
        
        while(strt < nums.size()){
            while(end < nums.size() && nums[strt] == nums[end]){
                cntr++;
                end++;
            }

            if(cntr == 1) return -1;

            ans += cntr/3;
            if(cntr%3 != 0) ans++;
            cntr = 0;
            strt = end;
        }
        return ans;
    }
};