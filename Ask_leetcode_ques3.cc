// // Question-> Given a sequence of n numbers such that the difference between the consecutive terms is constant, find the missing term in logarithmic time. Assume that the first and last elements are always part of the input sequence and the missing number lies between index 1 to n-1.

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n , minDiff = 0;
//     cin>>n;

//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin>>arr[i];
//     }

//     minDiff = min(abs(arr[1] - arr[0]) , abs(arr[2] - arr[1]));

//     for(int i = 0 ; i < n ; i++){
//         if((arr[i + 1] - arr[i]) != minDiff){
//             cout<<arr[i] + minDiff;
//             break;
//         }
//     }
//     return 0;
// }

// // 5
// // 2 8 12 16 20
// // Output: 4

// // 6
// // 5 15 20 25 30 35
// // Output: 10

// // 5
// // 5 7 9 11 15
// // Output: 13





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

