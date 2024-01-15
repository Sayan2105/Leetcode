#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int ans = 0;
    ans += n/100;
    n %= 100;
    ans += n/50;
    n %= 50;
    ans += n/10;
    n %= 10;
    ans += n/5;
    n %= 5;
    ans += n/2;
    n %= 2;
    ans += n/1;
    n %= 1;

    cout<<ans;
    return 0;
}