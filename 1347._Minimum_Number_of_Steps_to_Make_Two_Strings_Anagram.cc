#include <iostream>
#include <vector>
using namespace std;
int minSteps(string s, string t) {
    vector<int> charCnt(26, 0);
    int size = s.size();
    for(int i = 0; i < size; i++){
        charCnt[s[i] - 'a']++;
        charCnt[t[i] - 'a']--;
    }

    int ans = 0;
    for(int i = 0; i < 26; i++){
        ans += max(charCnt[i],0);
    }
    return ans;
}
int main(){

    string s = "leetcode", t = "practice";

    cout<<minSteps(s, t);
    return 0;
}