#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int x;
    vector<int>res(n);
    for(int i=1;i<=n;i++){
        cin>>x;
        res[x]=i;
    }
    
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
    
    return 0;
}