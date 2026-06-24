#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int len = 0;
        while (i >= 0 && s[i] == ' ')
            i--;
        while (i >= 0 && s[i--] != ' ')
            len++;
        return len;
    }
};
int main() {

    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    Solution obj;   
    int result = obj.lengthOfLastWord(s);   
    cout << "Length of last word = " << result;

    return 0;
}
