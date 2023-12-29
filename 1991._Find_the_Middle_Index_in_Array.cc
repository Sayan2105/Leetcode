#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMiddleIndex(vector<int>& nums){

        int lSum = 0, rSum =0;
        for(int i = 0; i < nums.size(); i++){
            rSum+=nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            int elem = nums[i];
            rSum -= elem;
            if(lSum == rSum){
                return i;
            }
            lSum += elem;
        }
        return -1;
    }
};