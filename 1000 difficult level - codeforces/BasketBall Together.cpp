#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,d;
    cin>>n>>d;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    int b = 0,count =0;
    sort(arr.rbegin(),arr.rend());
    for(int i=0;i<n;i++){
        b+= d/arr[i]+1;
        if(b>n)break;
        count++;
    }
    cout<<count<<endl;
    return 0;
}