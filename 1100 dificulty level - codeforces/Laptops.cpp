#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>price(n);
    vector<int>quality(n);
    for(int i=0;i<n;i++)cin>>price[i]>>quality[i];
    
    // sort(price.begin(),price.end());
    // sort(quality.begin(),quality.end());
    int flag =0;
    for(int i=0;i<n;i++){
    if(price[i]<quality[i]){
        flag=1;
        break;
    }
    }
    
    if(flag==1)cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
    return 0;
}