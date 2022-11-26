#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        int rem = z%x;
        int change = (rem-y+x)%x;
        z -= change;
        
        cout<<z<<endl;
    }
    return 0;
}