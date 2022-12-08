#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,h;
        cin>>n>>h;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++)cin>>arr[i];
        ll low =1,high=h;
        while(low<=high){
            ll mid = low+(high-low)/2;
            ll damage=0;
            for(ll i=0;i<n-1;i++)damage+= (arr[i]+mid>arr[i+1]?arr[i+1]-arr[i]:mid);
            damage+= mid;
            
            if(damage>=h)high =mid-1;
            else low=mid+1;
        }
        cout<<low<<endl;
    }
    return 0;
}