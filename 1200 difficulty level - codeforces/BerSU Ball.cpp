#include<bits/stdc++.h>
using namespace std;
#define ll long long 

/*
4
4 5 4 4  -> 4 4 4 5
5
5 3 4 2 4 ->2 3 4 4 5

4
1 4 6 2  ->1 2 4 6
5
5 1 5 7 9->1 5 5 7 9
*/
int main(){
    ll n;
    cin>>n;
    vector<ll>boys(n);
    for(ll i=0;i<n;i++)cin>>boys[i];
    sort(boys.begin(),boys.end());
    
    ll m;
    cin>>m;
    vector<ll>girls(m);
    for(ll i=0;i<m;i++)cin>>girls[i];
    sort(girls.begin(),girls.end());
    
    int a=0,b=0;ll count = 0;
    while(a<n && b<m){
        if(abs(boys[a]-girls[b])>1){
            if(boys[a]<girls[b])a++;
            else b++;
           
        }else if(abs(boys[a]-girls[b])<=1){
            count++;
            a++;b++;
        }
    }
    
    cout<<count;
    return 0;
    
}