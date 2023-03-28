#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    vector<int>h(n);
    for(int i=0;i<n;i++)cin>>h[i];
    
    vector<int>prefix(200005);
    for(int i=0;i<n;i++)prefix[i+1]=prefix[i]+h[i];
    
    int index;
    int mini = INT_MAX;
    
    for(int i=0;i<=n-k;i++){
        int total = prefix[i+k]-prefix[i];
        if(total<mini){
            mini = total;
            index = i+1;
        }
    }
    
    cout<<index;
    return 0;
}