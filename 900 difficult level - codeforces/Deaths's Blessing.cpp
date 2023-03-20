#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
        ll n;
        cin>>n;
        
        ll a[n],b[n];
        ll ans = 0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            ans+=a[i];
        }
        
        
        for(ll i=0;i<n;i++)cin>>b[i];
        if(n==1){
            cout<<ans<<endl;
            return;
            
        }
        
        ll suffix[n];
        suffix[n-1]=b[n-1];
        for(ll i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]+b[i];
        }
        
        ll pre = b[0];
        ll next = suffix[1];
        
        for(ll i=1;i<n-1;i++){
            next = min(next,pre+suffix[i+1]);
            pre += b[i];
        }
        next = min(next,pre);
        cout<<ans+next<<endl;
}

signed main(){
    ll t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}