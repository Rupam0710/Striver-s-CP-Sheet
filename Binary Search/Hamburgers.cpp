#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    
    ll nb,ns,nc,pb,ps,pc,r;
    cin>>nb>>ns>>nc;
    
    cin>>pb>>ps>>pc;
    
    cin>>r;
    
    ll a=0,b=0,c=0;
    for(auto &ch:s){
        if(ch=='B') a++;
        else if(ch=='S') b++;
        else c++;
    }
    
    ll low =0,high = r+200;
    while(low<=high){
        ll mid = low +(high-low)/2;
        
        //mid is the no of hamburgers we can make
        ll z =0;
        ll r1 = max(a*mid-nb,z);
        ll r2 = max(b*mid-ns,z);
        ll r3 = max(c*mid-nc,z);
        
        ll prices = r1*pb + r2*ps + r3*pc;
        
        if(prices<=r) low=mid+1;
        else high = mid-1;
        
        //low or high
        // low==high
        // high =ans , low = ans+ 1
        //high  = na -1;
        
    }
    
    cout<<high;
    
    return 0;
        
    }
    
    
    
