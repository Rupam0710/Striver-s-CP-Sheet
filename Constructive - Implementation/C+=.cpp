#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        
        int turn;
        if(a>b)turn =1;
        else turn = 0;
        
        int count = 0;
        while(a<=n && b<=n){
            if(turn%2==0){
                a+=b;
                turn++;
                count++;
            }else{
                b+=a;
                turn++;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}