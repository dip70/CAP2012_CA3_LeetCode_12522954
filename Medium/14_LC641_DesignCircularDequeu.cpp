#include <iostream>
#include <vector>

using namespace std;

int main() {
    int capacity = 3;
    vector<int> buffer(capacity);
    int front = 0;
    int rear = capacity - 1;
    int size = 0;

    auto insertFront = [&](int value) -> bool {
        if (size == capacity) return false;
        front = (front - 1 + capacity) % capacity;
        buffer[front] = value;
        size++;
        return true;
    };

    auto insertLast = [&](int value) -> bool {
        if (size == capacity) return false;
        rear = (rear + 1) % capacity;
        buffer[rear] = value;
        size++;
        return true;
    };

    auto deleteFront = [&]() -> bool {
        if (size == 0) return false;
        front = (front + 1) % capacity;
        size--;
        return true;
    };

    auto deleteLast = [&]() -> bool {
        if (size == 0) return false;
        rear = (rear - 1 + capacity) % capacity;
        size--;
        return true;
    };

    auto getFront = [&]() -> int {
        if (size == 0) return -1;
        return buffer[front];
    };

    auto getRear = [&]() -> int {
        if (size == 0) return -1;
        return buffer[rear];
    };

    auto isEmpty = [&]() -> bool {
        return size == 0;
    };

    auto isFull = [&]() -> bool {
        return size == capacity;
    };

    cout << boolalpha;
    cout << insertLast(1) << endl;
    cout << insertLast(2) << endl;
    cout << insertFront(3) << endl;
    cout << insertFront(4) << endl;
    cout << getRear() << endl;
    cout << isFull() << endl;
    cout << deleteLast() << endl;
    cout << insertFront(4) << endl;
    cout << getFront() << endl;

    return 0;
}
