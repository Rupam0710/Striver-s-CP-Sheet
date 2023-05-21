#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        
        while(n!=0){
            k = n-1;
            n = n&(n-1);
        }
        
        cout<<k<<endl;
    }
    
    return 0;
}