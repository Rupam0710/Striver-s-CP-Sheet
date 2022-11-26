#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        int odd=0;int even=0;
        for(int i=0;i<n;i++){
            cin>>x;
            
            if(x%2!=i%2){
                if(x%2)odd++;
                else even++;
            }
        }
        if(odd==even)cout<<odd<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
    
    
}