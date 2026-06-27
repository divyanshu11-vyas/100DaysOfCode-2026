#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int freq[128]={},need=0,have=0,ans=INT_MAX,l=0;
    for(char c:s)if(!freq[c]++)need++;
    fill(begin(freq),end(freq),0);
    for(int r=0;r<s.size();r++){
        if(++freq[s[r]]==1)have++;
        while(have==need)ans=min(ans,r-l+1),freq[s[l]]--,have-=(freq[s[l++]]==0);
    }
    cout<<ans;
}
