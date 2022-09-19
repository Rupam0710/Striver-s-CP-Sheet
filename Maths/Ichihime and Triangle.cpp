#include<bits/stdc++.h>
using namespace std;
char a[501][501];

void solve(){
    int n,k,r,c;
    cin>>n>>k>>r>>c;
    for(int i=1;i<=n;++i){
    for(int j=1;j<=n;++j){
      a[i][j]='.';}}
    for(int l=2;l<=n*2;++l)
    if(abs(r+c-l)%k==0)
      for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
          if(i+j==l)
            a[i][j]='X';
  for(int i=1;i<=n;++i) {
    for(int j=1;j<=n;++j)
      cout << a[i][j];
    cout << endl;
  }
}  

signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
}