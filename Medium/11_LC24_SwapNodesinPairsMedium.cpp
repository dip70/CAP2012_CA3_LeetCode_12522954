#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;

    while (prev->next != nullptr && prev->next->next != nullptr) {
        ListNode* first = prev->next;
        ListNode* second = prev->next->next;

        first->next = second->next;
        second->next = first;
        prev->next = second;

        prev = first;
    }

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
