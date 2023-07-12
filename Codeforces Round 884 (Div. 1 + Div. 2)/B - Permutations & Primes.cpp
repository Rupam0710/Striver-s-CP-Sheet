#include<bits/stdc++.h>
using namespace std;

// /3
// 1 4 -> 5
// 1 5 -> 6
// 9 26 -> 35

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        arr[0]=2;
        arr[n-1]=3;
        arr[n/2]=1;
        
        int element = 4;
        for(int i=1;i<n-1;i++){
            if(i!=n/2)arr[i] = element++;
            else if(i==n/2)continue;
        }
        
        
        for(auto it:arr)cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}