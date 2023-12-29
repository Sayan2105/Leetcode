#include<iostream>
#include<Math.h>
#include<string>

using namespace std;

class Solution {
public:
    int numberOfWays(string corridor) {
        int mod = pow(10,9) + 7;

        long long ans = 1;
        int plant = 0;
        int count = 0;

        for(int i = 0 ; i < corridor.length(); i++){
            if(count != 2){
                if(corridor[i] == 'S'){
                    count++;
                }
            }
            else{
                if(corridor[i] == 'P'){
                    plant++;
                }
                else{
                    plant++;
                    ans = (ans * plant) % mod;
                    count = 1;
                    plant = 0;
                }
            }
        }

        if(count != 2){
            return 0;
        }
        else{
            return ans;
        }
    }
};