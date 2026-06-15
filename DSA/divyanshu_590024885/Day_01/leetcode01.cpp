#include <iostream>
#include <vector>

using namespace std;

int sumArray(vector<int>& nums) {
    int sum = 0;

    for (int x : nums) {
        sum += x;
    }

    return sum;
}

int main() {

    vector<int> nums = {1, 2, 3, 4, 5};

    int result = sumArray(nums);

    cout << "Sum = " << result << endl;

    return 0;
}
