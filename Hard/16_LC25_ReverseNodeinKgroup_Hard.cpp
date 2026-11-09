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

    int k = 2;

    ListNode* dummy = new ListNode(0, head);
    ListNode* prevGroupEnd = dummy;

    while (true) {
        ListNode* kthNode = prevGroupEnd;
        for (int i = 0; i < k && kthNode != nullptr; i++) {
            kthNode = kthNode->next;
        }
        if (kthNode == nullptr) break;

        ListNode* groupStart = prevGroupEnd->next;
        ListNode* nextGroupStart = kthNode->next;

        ListNode* prev = nextGroupStart;
        ListNode* curr = groupStart;
        while (curr != nextGroupStart) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }

        prevGroupEnd->next = kthNode;
        prevGroupEnd = groupStart;
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
