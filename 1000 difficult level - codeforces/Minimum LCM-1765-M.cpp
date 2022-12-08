#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int x=1;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                x=n/i;
                break;
            }
        }
        cout<<x<<" "<<n-x<<endl;
    }

    return 0;
}