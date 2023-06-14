#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int m;
        string s;
        
        
        int mina = 1e9 ,minb = 1e9, minc = 1e9;
        for(int i=0;i<n;i++){
            cin>>m>>s;
            
            if(s=="10")mina = min(mina,m);
            else if(s=="01")minb = min(minb,m);
            else if(s=="11")minc = min(minc,m);
        }
        
        int ans = min(mina+minb,minc);
        if(ans>=1e9)cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}