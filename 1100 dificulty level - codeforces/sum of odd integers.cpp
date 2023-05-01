#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
3 1 - 1*1<=3 - yes
4 2 - 2*<=4  - yes
10 3 - no
*/
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        
        if(n%2 == k%2  && k*k<=n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}