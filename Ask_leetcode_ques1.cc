// Question - Given a string s and a pattern p, write a function to find all the starting indices of anagrams of the pattern in the string.


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    unordered_map<char, int> charCount;
    for (char ch : p) {
        charCount[ch]++;
    }
    
    int left = 0, right = 0, count = p.length();
    
    while (right < s.length()) {
        if (charCount[s[right]] > 0) {
            count--;
        }
        
        charCount[s[right]]--;
        
        right++;
        
        if (count == 0) {
            result.push_back(left);
        }
        
        if (right - left == p.length()) {
            if (charCount[s[left]] >= 0) {
            }
            
            charCount[s[left]]++;
            
            left++;
        }
    }
    
    return result;
}

int main() {
    string s, p;
    
    cout << "Enter the string: ";
    cin >> s;
    
    cout << "Enter the pattern: ";
    cin >> p;
    
    vector<int> indices = findAnagrams(s, p);
    
    cout << "Indices of anagrams: ";
    for (int index : indices) {
        cout << index << " ";
    }
    
    return 0;
}


// Test cases
// Q1 ->
// Enter the string: "cbaebabacd"
// Enter the pattern: "abc"
// Solution -> 0 6

// Q2 ->
// Enter the string: "abab"
// Enter the pattern: "ab"
// solution -> 0 1 2

// Q3 ->
// Enter the string: "xyzxyza"
// Enter the pattern: "xyz"
// Solution -> 0 3 4