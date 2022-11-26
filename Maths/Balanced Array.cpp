#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int diff=n/2;
        if(diff%2){
            cout<<"NO"<<endl;
            continue;}
            
        else cout<<"YES"<<endl;
        
        int i=2;
        while(--n){
            cout<<i<<" ";
            if(i==2*diff)i=1;
            else i+=2;
            
        }
        cout<<i+diff<<endl;
    }
    return 0;
}