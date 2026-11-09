
#include <iostream>
using namespace std;

int main() {

    int num[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++) {

        if (num[i] == 0) {

            for (int j = i; j < n - 1; j++) {
                num[j] = num[j + 1];
            }

            num[n - 1] = 0;
        }
    }


    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }

    return 0;
}
