#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll sum(ll n){
    return (n*(n+1))/2;
}
int main(){
    
    ll n,k;
    cin>>n>>k;
    
    n-=1;
    ll s = sum(k-1);
    if(s<n)cout<<-1;
    else{
        ll low =0,high = k-1;
        
        while(low<=high){
            ll mid = low + (high-low)/2;
            if(s-sum(mid)>=n)low = mid+1;
            else high = mid-1;
        }
        cout<<k-1-high;
    }
    return 0;
}