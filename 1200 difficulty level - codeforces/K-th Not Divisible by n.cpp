#include<bits/stdc++.h>
using namespace std;
#define ll long long

// n=3 k =7
// 1 2  4 5  7 8  10


// 1 - 6         7
// 3-1=2 
// 7 + 6/2 = 10

//  1 2 3

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        
        cout<< k + (k-1)/(n-1) <<endl;
    }
    
    return 0;
}