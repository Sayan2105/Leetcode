#include <iostream>
using namespace std;
int main(){

    int n , strt = 0, end = 0, ans = 0;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    while(end < n){
        if(arr[end] >= arr[end + 1] || end == n - 1){
            ans += (arr[end] - arr[strt]); 
            strt = end + 1;
            end++;
            cout<<"end is : "<<arr[end]<<" start is : "<<arr[strt]<<endl;
        }
        end++;
    }

    if(ans <= 0){
        ans = 0;
    }
    cout<<ans;
    return 0;
}

// 7 100 180 260 310 40 535 695
// 5  10 8 6 4 2
// 5 4 2 2 2 4