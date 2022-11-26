#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,r,price;
    cin>>k>>r;
    
    for(int i=1;i<=10;i++){
        price = i*k;
        if(price%10==0 || price%10==r){
            cout<<i;
            return 0;
        }
    }
    return 0;
}