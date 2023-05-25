#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int len = s.length();
        int count = 0;
        char res = s[0];
        int cur_count = 1;
 
    // Traverse string except last character
    for (int i=0; i<len; i++)
    {
        // If current character matches with next
        if (i < len-1 && s[i] == s[i+1])
            cur_count++;
 
        // If doesn't match, update result
        // (if required) and reset count
        else
        {
            if (cur_count > count)
            {
                count = cur_count;
                res = s[i];
            }
            cur_count = 1;
        }
    }
    cout<<count+1<<endl;
    }
    
    return 0;
}