#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(i < 2){
            cout<<-1<<endl;
        }
        else{
            cout<< arr[i] * arr[(i - 1)] * arr[(i - 2)]<<endl;
        }
    }

    // for(int i = 0; i < n; i++){

    // }

    return 0;
}