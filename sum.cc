#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int totalSum = 0, left = 0, minDiff = INT_MAX, index = 0;

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        totalSum += arr[i];
    }

    cout<<"Total sum = "<<totalSum<<endl;

    for(int i = 0 ; i < n ; i++){
        left += arr[i];
        totalSum = abs(totalSum - left);
        if(minDiff > totalSum){
            minDiff = totalSum;
            index = i;
        }
    }

    cout<<index;
    return 0;
}

// 7 5 6 7 8 9 10 6