#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    
    int left = 0;
    int right =1;int length=1;
    while(right<n){
        if(arr[right]>arr[right-1]){
            length = max(length,right-left+1);
            right++;
        }
        else{
            
            left=right;
            right++;
        }
        
    }
    cout<<length;

    return 0;
}