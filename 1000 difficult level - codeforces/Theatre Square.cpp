#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    double n,m,a;
    cin>>n>>m>>a;
    
    ll res = ceil(n/a) * ceil(m/a);
    cout<<res;
    return 0;
}

