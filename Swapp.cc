#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string str;
    cin>>str;

    int strt = 0, end = str.size() - 1;

    while(strt < end){
        if(!isalpha(str[strt])) strt++;
        else if(!isalpha(str[end])) end--;
        else{
            swap(str[strt] , str[end]);
            strt++;
            end--;
        }
    }
    cout<<str;
}