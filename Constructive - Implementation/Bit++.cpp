#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;int X=0;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        if(s[1]=='+') X++;
        else X--;
    }
    
    cout<<X;
    return 0;
}