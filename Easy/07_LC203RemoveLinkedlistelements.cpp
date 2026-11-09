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
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(6);

    int targetVal = 6;

    ListNode* dummy = new ListNode(0, head);
    ListNode* current = dummy;


    while (current->next != nullptr) {
        if (current->next->val == targetVal) {
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
    }


    head = dummy->next;
    delete dummy;


    cout << "Cleaned List: ";
    ListNode* printPtr = head;
    while (printPtr != nullptr) {
        cout << printPtr->val << " -> ";
        printPtr = printPtr->next;
    }
    cout << "nullptr" << endl;


    while (head != nullptr) {
        ListNode* nextNode = head->next;
        head = nextNode;
    }

    return 0;
}
