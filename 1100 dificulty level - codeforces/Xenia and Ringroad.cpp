#include<bits/stdc++.h>
using namespace std;

/*
4 3
    3     2 3
1 2 3 4 1 2 3 4
*/

int main(){
    int n,m;
    cin>>n>>m;
    int initial = 1,present;long long count = 0;
    for(int i=0;i<m;i++){
        cin>>present;
        if(present>=initial)count+=(present-initial);
        else{
            count+=n-(initial-present);
        }
        initial = present;
    }
     cout<<count;
    return 0;
}