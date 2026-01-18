#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int x;

    while (true) {
        cin >> x;
        if (x == 0)
            break;
        nums.push_back(x);
    }

    for (int i = nums.size() - 1; i >= 0; i--) {
        cout << nums[i] << " ";
    }

    return 0;
}

