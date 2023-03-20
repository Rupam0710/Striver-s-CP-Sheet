#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        ll g=0;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
           cin>>arr[i];
           g = __gcd(g,arr[i]);
        }
        
        cout<<arr[n-1]/g<<endl;
    }
    return 0;
}