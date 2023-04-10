#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int int_ang;
        cin>>int_ang;
        
        
        int ext_angle = 180- int_ang;
        int n = 360%ext_angle;
        
        if(n==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}