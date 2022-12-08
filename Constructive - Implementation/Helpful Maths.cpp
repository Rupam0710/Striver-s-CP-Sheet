#include<bits/stdc++.h>
using namespace std;

int main(){
    string input,output;
    cin>>input;
    
    for(int i=0;i<input.size();i++){
        if(input[i]!='+')output.push_back(input[i]);
    }
    sort(output.begin(),output.end());
    cout<<output[0];
    
    for(int i=1;i<output.size();i++){
        cout<<"+"<<output[i];
    }
    return 0;
}