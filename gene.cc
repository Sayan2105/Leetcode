#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int steadyGene(string gene) {
    int n = gene.length();
    int targetCount = n / 4;

    // Calculate the target count for each character
    unordered_map<char, int> target;
    for (char ch : "ACGT") {
        target[ch] = targetCount;
    }

    // Initialize pointers and counters
    int left = 0, right = 0;
    int minSubstrLength = n;

    // Count occurrences of each character in the current window
    unordered_map<char, int> counts;

    // Move the right pointer to find a substring with excess occurrences
    while (right < n && counts['A'] <= targetCount && counts['C'] <= targetCount &&
           counts['G'] <= targetCount && counts['T'] <= targetCount) {
        counts[gene[right]]++;
        right++;
    }

    // Move the left pointer to find the minimum valid substring
    while (left < n && counts['A'] > targetCount && counts['C'] > targetCount &&
           counts['G'] > targetCount && counts['T'] > targetCount) {
        counts[gene[left]]--;
        left++;
    }

    // Check if the substring is smaller than the current minimum
    while (left < n && counts['A'] <= targetCount && counts['C'] <= targetCount &&
           counts['G'] <= targetCount && counts['T'] <= targetCount) {
        minSubstrLength = min(minSubstrLength, right - left);

        // Move the left pointer to find the next minimum valid substring
        counts[gene[left]]--;
        left++;
    }

    return minSubstrLength;
}

int main() {
    string gene = "AGCT";
    int result = steadyGene(gene);
    cout << result << endl;  // Output: 5
    return 0;
}