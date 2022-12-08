#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    
    sort(arr,arr+4);
    
    int a = arr[3]-arr[0];
    int b = arr[3]-arr[1];
    int c = arr[3]-arr[2];
    cout<<a<<" "<<b<<" "<<c;
    
    return 0;
}