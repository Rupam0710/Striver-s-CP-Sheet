#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans= abs(a-b);
        
        ans = ceil(ans/10.0);
        cout<<ans<<endl;
        
    }
 return 0;   
}    
