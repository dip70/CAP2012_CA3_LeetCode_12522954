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
    head->next->next->next->next = new ListNode(5);


    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }


    if (slow != nullptr) {
        cout << "Middle Node Value: " << slow->val << endl;
    } else {
        cout << "The list is empty." << endl;
    }


    ListNode* current = head;
    while (current != nullptr) {
        ListNode* nextNode = current->next;

        current = nextNode;
    }

    return 0;
}
