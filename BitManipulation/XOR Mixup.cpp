#include<bits/stdc++.h>
using namespace std;

// 4 3 2 5

// 4 100 
// 3 011
// 2 010
//   001
// 5 101
//   100


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
       
        for(int i=0;i<n;i++){
            k =arr[i];
            int xori = 0;
            for(int j=0;j<n;j++){
                if(j!=i)xori =xori^arr[j];
            }
            
            if(xori==k)break;
        }
        
        cout<<k<<endl;
    }
    
    return 0;
}