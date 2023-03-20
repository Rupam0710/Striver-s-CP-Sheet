#include<bits/stdc++.h>
using namespace std;
/*
1+2*3=7
1*3+2=5
1*(2+3)=5
(1+2)*3=9
1*2*3=6
1+2+3=6
*/


int main(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    
    
    
    int maxi = 0;
    
    int a = arr[0]+arr[1]*arr[2];
    int b = arr[0]*(arr[1]+arr[2]);
    
    maxi = max(maxi,max(a,b));
    
    int c = arr[0]*arr[1]*arr[2];
    int d = (arr[0]+arr[1])*arr[2];
    
    maxi = max(maxi,max(c,d));
    
    int e = (arr[0]*arr[1])+arr[2];
    int f = arr[0]+arr[1]+arr[2];
    
    maxi = max(maxi,max(e,f));
    
    cout<<maxi;
    
    return 0;
}