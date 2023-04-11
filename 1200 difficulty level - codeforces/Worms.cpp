#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int index=1;
    int worms;
    vector<int>arr(1000006);
    
    for(int i=1;i<=n;i++){
        cin>>worms;
        while(worms--){
            arr[index]=i;
            index++;
        }
    }
    
    int number_juicy_worm;
    cin>>number_juicy_worm;
    while(number_juicy_worm--){
        cin>>worms;
        cout<<arr[worms]<<endl;
    }
    return 0;
}