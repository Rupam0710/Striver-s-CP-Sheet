#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
 aj−ai=j−i
 
 aj-j=ai-i
6
3 5 1 4 6 6

3 - 0 = 3        co = 0
5 - 1 = 4        co = 0
1 -2 = -1        co = 0
4 -3 = 1         co = 0
6-4 =2           co = 0 
6-5 = 1          co = 1 

3
1 2 3 
1 - 0 = 1        co =1
2 - 1 = 1        co =2
3 - 2 = 1        co =3
*/

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int num; ll count=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            cin>>num;
            count+=mpp[num-i]++;
        }
        
        cout<<count<<endl;
        
    }
    
    return 0;
}