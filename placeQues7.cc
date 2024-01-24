#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    int arr[n];
    int dep[n];

    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    for(int i = 0; i< n ; i++){
        cin>>dep[i];
    }

    sort(arr, arr+n);
    sort(dep, dep+n);

    int plat = 1, depCheck = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] <= dep[depCheck]){
            plat++;
        }
        else{
            depCheck++;
        }
    }

    cout<<plat;
    return 0;
}

// 6 0900 0940 0950 1100 1500 1800 - 0910 1200 1120 1130 1900 2000
// 3 0900 1100 1235 - 1000 1200 1240
// 