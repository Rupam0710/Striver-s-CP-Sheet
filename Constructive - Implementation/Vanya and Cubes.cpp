#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int sum=0,x=0,count=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        x+=sum;
        if(x<=n)count++;
        else break;
    }
    cout<<count;
    return 0;
}