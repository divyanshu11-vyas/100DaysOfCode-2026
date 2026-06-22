#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) l++;
            while (l < r && !isalnum(s[r])) r--;
            if (tolower(s[l++]) != tolower(s[r--])) return false;
        }
        return true;
    }
};

int main() {
    Solution solution;

    string test1 = "A man, a plan, a canal: Panama";
    cout << (solution.isPalindrome(test1) ? "True" : "False") << endl;

    string test2 = "race a car";
    cout << (solution.isPalindrome(test2) ? "True" : "False") << endl;

    string test3 = "   ";
    cout << (solution.isPalindrome(test3) ? "True" : "False") << endl;

    return 0;
}