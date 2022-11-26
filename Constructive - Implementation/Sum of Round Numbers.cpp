#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        vector<int>res;
        int len = size(s);
        
        for(int i=0;i<len;i++){
            if(s[i]!='0') {int last_count = len-i-1;
            int num = (s[i]-'0')*pow(10,last_count);
            res.push_back(num);
            }
        }
        
        cout<<res.size()<<endl;
        for(auto it:res)cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}