#include <iostream>

using namespace std;

int main() {
    int nums[] = {1, 3, 5, 6};
    int n = sizeof(nums);
    int target = 2;
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            left = mid;
            break;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << left << endl;

    return 0;
}
