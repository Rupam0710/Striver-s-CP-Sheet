#include<bits/stdc++.h>
using namespace std;

/*
10 10
1 2 3 4 1 2 3 4 100000 99999
1
2
3
4
5
6
7
8
9
10
*/

int main(){
    int n,m;
    cin>>n>>m;//10 10
    int arr[n+1];
    for(int i=1;i<=n;i++)cin>>arr[i];//1 2 3 4 1 2 3 4 100000 99999
    
    set<int>s;
    for(int i=n;i>0;i--){
        s.insert(arr[i]);// 99999 100000 4 3 2 1 
        arr[i]=s.size();
        // arr[10]=1 
        // arr[9] = 2 
        // arr[8] = 3 
        // arr[7] = 4 
        // arr[6] = 5 
        // arr[5] = 6 
        // arr[4] = 6 
        // arr[3] = 6 
        // arr[2] = 6 
        // arr[1] = 6
    }
    
    int p;
    for(int i=1;i<=m;i++){
        cin>>p;
        cout<<arr[p]<<endl;
            // 1 - 6 
            // 2 - 6 
            // 3 - 6 
            // 4 - 6 
            // 5 - 6 
            // 6 - 5
            // 7 - 4 
            // 8 - 3 
            // 9 - 2
            // 10 - 1
    }
    
    return 0;
}