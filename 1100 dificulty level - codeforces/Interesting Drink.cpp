#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
n - no of shops
p - prices of bottles of drink in ith shop
q - no of days he wants to buy drink consecutively
m - the number of coins Vasiliy can spent on the i-th day.

5
3 10 8 6 11
3 6 8 10 11
4
1
10
3
11
*/

int main(){
    ll shops;
    cin>>shops;
    vector<ll>prices(shops);
    for(ll i=0;i<shops;i++)cin>>prices[i];
    sort(prices.begin(),prices.end());
    
    ll con_days;
    cin>>con_days;
    
    ll coins_daily;
    for(ll i=0;i<con_days;i++){
        cin>>coins_daily;
        
        
        cout<<upper_bound(prices.begin(),prices.end(),coins_daily)-prices.begin()<<endl;
        
    }
    return 0;
}