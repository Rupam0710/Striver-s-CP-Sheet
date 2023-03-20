#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string st =" ";
    for(int i=0;i<s.size();i++){
        if(s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' 
        ||s[i]=='U' ||s[i]=='Y' || s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='y')continue;
        else if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' 
        &&s[i]!='U' &&s[i]!='Y' && s[i]!='a' &&s[i]!='e' &&s[i]!='i' &&s[i]!='o' &&s[i]!='u' &&s[i]!='y' &&islower(s[i])){
            st+='.';
            st+=s[i];
        }
        else if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' 
        &&s[i]!='U' &&s[i]!='Y' && s[i]!='a' &&s[i]!='e' &&s[i]!='i' &&s[i]!='o' &&s[i]!='u' &&s[i]!='y' &&isupper(s[i])){
            st+='.';
            st+=tolower(s[i]);
        }
    }
    
    cout<<st;
    
    return 0;
    
}