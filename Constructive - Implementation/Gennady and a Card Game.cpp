#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
   
    int n=5;int flag =0;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        for(auto x:arr){
            if(x[0]==s[0] || x[1]==s[1]){
                flag=1;
                break;
            }
        }
    }
    
   
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    return 0;
    
    
}