#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++)cin>>arr[i];
        
        ll count =0;
        ll low = 0;ll high =0;
        while(high<n){
            while(arr[high]==arr[high+1])high++;
            
            if((low==0 || arr[low-1]>arr[low]) && (high==n-1 || arr[high]<arr[high+1]))count++;
            low=high+1;
            high++;
        }
        if(count==1)cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}