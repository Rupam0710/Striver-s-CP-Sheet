#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        
        
        int ans;
        if(a%b==0)cout<<0<<endl;
        else{
            int rem = a%b;
            ans = b-rem;
            cout<<ans<<endl;
        }
        
    }
    return 0;
}