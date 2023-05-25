#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        char a = '0';
        for(int i=0;i<s.size();i++){
            if(s[i]=='0' || s[i]=='1')a=s[i];
            
            else if(s[i]=='?')s[i]=a;
        }
        
        cout<<s<<endl;
    }
    
    return 0;
}