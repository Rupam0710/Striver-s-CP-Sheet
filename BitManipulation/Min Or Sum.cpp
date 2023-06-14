#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,ori=0;
        for(int i=0;i<n;i++){
            cin>>x;
            ori = ori|x;
        }
        
        cout<<ori<<endl;
    }
    return 0;
}