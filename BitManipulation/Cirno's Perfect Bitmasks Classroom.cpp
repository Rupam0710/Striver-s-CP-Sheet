#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        
        int y = x&-x;
        while(!(x^y) || !(x&y))y++;
        
        cout<<y<<endl;
    }
    return 0;
}