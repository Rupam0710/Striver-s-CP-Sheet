#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    int len = s.length();
    
    int c=0;
    for(int i=0;i<len;i++){
        if(s[i]=='4' || s[i]=='7') c++;
    }
    if(c==4 || c==7)cout<<"YES";
    else cout<<"NO";
    
    return 0;
    
    
}