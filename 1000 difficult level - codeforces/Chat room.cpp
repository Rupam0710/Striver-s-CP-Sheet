#include<bits/stdc++.h>
using namespace std;
int main(){
    string he = "hello";int a=0,count=0;
    
    string s;
    cin>>s;
    
    for(int i=0;i<s.size();i++){
        if(s[i]==he[a]){
            count++;
            a++;
        }
    }
    
    if(count == he.size())cout<<"YES";
    else cout<<"NO";
    
    return 0;
}