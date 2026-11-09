
#include <iostream>
using namespace std;

int main() {

    int num;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;

    while (temp > 0) {

        int digit = temp % 10;

        if (num % digit == 0) {
            count++;
        }

        temp = temp / 10;
    }

    cout << count;

    return 0;
}
