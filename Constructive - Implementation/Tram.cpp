#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    
    int maxi = INT_MIN;
    
    int rem=0;
    for(int i=0;i<n;i++){
        rem += b[i]-a[i];
        if(rem>maxi) maxi=rem;
    }
    
    cout<<maxi;
    
    return 0;
}