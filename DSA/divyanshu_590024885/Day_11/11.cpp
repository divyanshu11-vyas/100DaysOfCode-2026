#include<bits/stdc++.h>
using namespace std;

string transform(string s) {
    string res;
    string vowels = "aeiouAEIOU";
    for (char c : s)
        if (isalpha(c) && vowels.find(c) == string::npos)
            res += "." + string(1, tolower(c));
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << transform(s);
}