#include <iostream>

using namespace std;

int main() {

    int nums[] = {-4, -1, 0, 3, 10};
    int n = sizeof(nums) / sizeof(nums[0]);


    int result[5];


    int left = 0;
int right = n - 1;
int index = n - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[index] = leftSquare;
            left++;
        } else {
            result[index] = rightSquare;
            right--;
        }
        index--;
    }


    cout << "Sorted Squares: ";
    for (int i = 0; i < n; i++) {
        cout << result[i];
    }
    cout << endl;

    return 0;
}
