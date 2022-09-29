#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[5][5];int x;int moves =0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>x;
            arr[i][j]=x;
            if(x==1){
                if(j>=2) moves+= j-2;
                else moves += 2-j;
                if(i>=2) moves+= i-2;
                else moves += 2-i;
            }  
        }
    }
    cout<<moves<<endl;

}