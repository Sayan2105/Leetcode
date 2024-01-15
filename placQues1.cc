// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n, l = 0, lSum = 0, rSum = 0;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);

//     while (l < n/2 - 1) {
//         lSum += arr[l] + arr[n - 1 - l];
//         rSum += arr[l + 1] + arr[n - 2 - l];
//         l += 2;
//     }

//     cout << abs(lSum - rSum);

//     return 0;
// }

// // 7 3 4 5 6 7 8 9
// // 


#include <iostream>
using namespace std;
 
int findMin(int arr[], int i, int sumCalculated, int total) {
    if (i == 0)
        return abs((total - sumCalculated) - sumCalculated);
 
    return min(findMin(arr, i - 1, sumCalculated + arr[i - 1], total),findMin(arr, i - 1, sumCalculated, total));
}
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
 
    cout << "Difference between two sets is " << findMin(arr, n, 0, total);
    return 0;
}