#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
5
1 2 3 -1 -2


3 
-1 
3+(-1)=2
*/

bool sign(ll num){
    return num>0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        
        ll ans = 0;
        for(int i=0;i<n;i++){
            ll j = i;
            ll maxi = arr[i];
            
           
            while(j<n  && sign(arr[i])==sign(arr[j])){
                maxi = max(maxi,arr[j]);
                j++;
            }
            
            i = j-1;
            ans+=maxi;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}
