#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>charges(n);
        for(int i=0;i<n;i++)cin>>charges[i];
        
        ll odd = 0, even = 0;
        for(int i=0;i<n;i++){
            if(i%2){
                if(charges[i]>0)odd+=charges[i];
            }
            else{
                if(charges[i]>0)even+=charges[i];
            }
        }
        
        ll maxi = max(odd,even);
        
        if(maxi==0){
            sort(charges.begin(),charges.end());
            maxi = charges[n-1];
        }
        
        cout<<maxi<<endl;
    }
    
    return 0;
}