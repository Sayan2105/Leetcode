//Vikranth provides an integer N, which represents the size of a string S. Your goal is to calculate the count of contiguous substrings within the string S, where the first and last characters of each substring are the same.

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n, cntr = 1, ans = 0;
    cin >> n;
    string str;
    cin >> str;

    sort(str.begin(), str.end());

    for (int i = 1; i <= n; i++) {
        if (str[i] == str[i - 1]) {
            cntr++;
        } else {
            ans += (cntr * (cntr - 1)) / 2;
            cntr = 1;
        }
    }
    ans += (cntr * (cntr - 1)) / 2;

    cout << ans + n;

    return 0;
}

// Input: 
// 5
// abcab
// Output:
// 7

// Input:
// 3
// abc
// Output:
// 3

// Input:
// 6
// aaaaaa
// Output:
// 21

