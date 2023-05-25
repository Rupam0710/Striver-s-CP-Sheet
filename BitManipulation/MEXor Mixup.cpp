#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        
        int a,b;
        cin>>a>>b;
        
        int h = a-1,x;
        
        if(h%4==0)x=h;
        else if(h%4==1)x=1;
        else if(h%4==2)x=h+1;
        else if(h%4==3)x=0;
        
        int y = x^b;
        
        if(y==0)cout<<a<<endl;
        else if(y==a)cout<<a+2<<endl;
        else cout<<a+1<<endl;
        
    }
    
    return 0;
    
}