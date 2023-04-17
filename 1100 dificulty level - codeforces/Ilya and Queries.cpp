#include<bits/stdc++.h>
using namespace std;

/*

#..###
0 - 0  
1 - 0 
2 - 0+1 = 1 
3 - 1 
4 - 1 + 1=2 
5 - 2 + 1 = 3 


5
1 3 - dp[2]- dp[0] = 1 -0 =1
5 6 - 3 - 2 =1 
1 5 - 2 - 0 = 2 
3 6 - 3 -1 = 2 
3 4 - 1 - 1 = 0
*/


int main(){
    string s;
    cin>>s;
    
    
    int dp[100005];
    dp[0]=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])dp[i]=dp[i-1]+1;
        else dp[i]=dp[i-1];
    }
    
    int m;
    cin>>m;
    int left ,right;
    for(int i=0;i<m;i++){
        cin>>left>>right;
        cout<<dp[right-1]-dp[left-1]<<endl;
    }
    
    return 0;
}