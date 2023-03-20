#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
    ll n;
    cin>>n;
        ll x,y,z;
        ll sumx=0,sumy=0,sumz=0;
        while(n--){
            cin>>x>>y>>z;
            sumx += x;
            sumy += y;
            sumz += z;
        }
        if(sumx ==0 && sumy==0 && sumz ==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    return 0;
    
}