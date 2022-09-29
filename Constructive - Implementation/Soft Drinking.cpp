#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int drink = k*l;
    int limes = c*d;
    int toast = drink/(n*nl);
    int total_limes = limes/n;
    int salt = p/(n*np);
    
    int ans = min(toast,min(total_limes,salt));
    cout<<ans;
    return 0;
}