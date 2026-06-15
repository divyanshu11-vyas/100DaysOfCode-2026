#include <iostream>
#include <vector>

using namespace std;

long long sumArray(const vector<int>& arr) {
    long long sum = 0;

    for (int num : arr) {
        sum += num;
    }

    return sum;
}

int main() {

    vector<int> arr = {3, 8, 2, 9, 1};

    cout << sumArray(arr);

    return 0;
}