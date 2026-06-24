#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    cout<<(set<char>(s.begin(),s.end()).size()%2==0?"CHAT WITH HER!":"IGNORE HIM!");
}
