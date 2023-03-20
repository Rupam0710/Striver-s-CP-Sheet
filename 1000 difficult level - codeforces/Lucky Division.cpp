#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums{4,7,47,44,77,74,447,444,477,474,747,774,777,744};
    int n;
    cin>>n;int flag=0;
    for(int i=0;i<nums.size();i++){
        if(n%nums[i]==0){
            flag=1;
            break;
        }
    }
    
    if(flag==1)cout<<"YES";
    else cout<<"NO";
    
    return 0;
}