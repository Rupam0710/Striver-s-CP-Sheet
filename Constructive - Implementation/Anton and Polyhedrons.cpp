#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int sum=0;
    
    string str;
    for(int i=0;i<n;i++) {
        cin>>str;
        
        if(str.compare("Tetrahedron")==0) sum+= 4;
        else if(str.compare("Cube")==0) sum+= 6;
        else if(str.compare("Octahedron")==0) sum+= 8;
        else if(str.compare("Dodecahedron")==0) sum+= 12;
        else if(str.compare("Icosahedron")==0) sum+= 20;
    }
    cout<<sum;
}