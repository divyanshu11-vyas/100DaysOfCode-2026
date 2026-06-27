#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;cin>>s1>>s2;
    auto count=[](string s){
        long long dp=1;int last[128]={};
        for(char c:s){dp*=2;dp-=last[c];last[c]=dp/2+1;}//wrong, redo
        return dp;
    };
    cout<<(count(s1)>=count(s2)?s1:s2);
}