#include <iostream>
using namespace std;
int main() {

    int nums[] = {1, 1, 1, 2, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);

    int uniqueCount = n;
    if (n > 2) {
        int insertIndex = 2;

        for (int i = 2; i < n; i++) {
            if (nums[i] != nums[insertIndex - 2]) {
                nums[insertIndex] = nums[i];
                insertIndex++;
            }
        }
        uniqueCount = insertIndex;
    }

    cout << "New Length: " << uniqueCount << " (Expected: 5)" << endl;

    cout << "Modified Array: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n(Expected elements: 1 1 2 2 3)" << endl;

    return 0;
}
