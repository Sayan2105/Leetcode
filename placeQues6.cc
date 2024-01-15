#include <iostream>
using namespace std;
int main(){
    int n, side1 = 0, side2 = 0, total = 0, left = 0, right = 1;
    bool rightChosen = false;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
        total += arr[i];
    }

    while(right < n && left < n - 1){
        if(arr[left] < arr[right] || rightChosen == true){
            side1 += arr[right];
            rightChosen = true;
        }
        else if (arr[left] > arr[right]){
            side1 += arr[left];
        }

        right += 2;
        left += 2;
    }

    side2 = total - side1;
    cout<<max(side1, side2);
    return 0;
}