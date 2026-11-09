#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;


    q.push(10);

    q.push(20);
    q.push(q.front());
    q.pop();



    q.push(30);

    for (int i = 0; i < 2; i++) {
        q.push(q.front());
        q.pop();
    }


    cout << "Top element: " << q.front() << endl;


    cout << "Popped: " << q.front() << endl;
    q.pop();

    cout << "New Top element: " << q.front() << endl;

    return 0;
}
