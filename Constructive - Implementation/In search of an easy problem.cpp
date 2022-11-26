#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int x;int easy,hard=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1){
            hard++;
            break;
        }else{
            easy++;
        }
    }
    
    if(hard>=1) cout<<"HARD";
    else cout<<"EASY";
    
    return 0;
}