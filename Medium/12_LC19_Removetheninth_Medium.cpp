#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* nextNode) : val(x), next(nextNode) {}
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 2;

    ListNode* dummy = new ListNode(0, head);
    ListNode* first = dummy;
    ListNode* second = dummy;

    for (int i = 0; i <= n; i++) {
        first = first->next;
    }

    while (first != nullptr) {
        first = first->next;
        second = second->next;
    }

    ListNode* toDelete = second->next;
    second->next = second->next->next;
    delete toDelete;

    head = dummy->next;
    delete dummy;

    ListNode* printPtr = head;
    while (printPtr != nullptr) {
        cout << printPtr->val << " -> ";
        printPtr = printPtr->next;
    }
    cout << "nullptr" << endl;

    while (head != nullptr) {
        ListNode* nextNode = head->next;
        delete head;
        head = nextNode;
    }

    return 0;
}
