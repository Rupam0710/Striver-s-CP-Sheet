#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    
    int max_height = INT_MIN;
    int min_height = INT_MAX;
    
    int max_index = 0;
    int min_index=0;
    
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        
        if(x>max_height){
            max_height = x;
            max_index = i;
        }if(x<=min_height){
            min_height = x;
            min_index= i;
        }
    }
    
    int res = max_index +n-1 - min_index;
    if(max_index<min_index)cout<<res;
    else cout<<res-1;
    
    return 0;
}