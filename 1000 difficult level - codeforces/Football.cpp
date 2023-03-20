#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    
    unordered_map<string,int>mpp;
    for(int i=0;i<n;i++){
        cin>>s;
        mpp[s]++;
    }
    
    int maxi = INT_MIN;
    string winner;
    for(auto it:mpp){
        if(it.second>maxi){
            maxi = it.second;
            winner = it.first;
        }
    }
    
    cout<<winner<<endl;
    
    return 0;
    
}