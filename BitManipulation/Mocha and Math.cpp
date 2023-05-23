#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        
        int andi = arr[0];
        for(int i=1;i<n;i++)andi=andi&arr[i];
        
        cout<<andi<<endl;
    }
    return 0;
}