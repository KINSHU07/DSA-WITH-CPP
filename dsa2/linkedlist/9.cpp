//sort 0's 1's and 2's
#include <bits/stdc++.h>
using namespace std;

// Definition of singly linked list
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// helper: print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// function to sort 0s, 1s, and 2s
ListNode* sortList(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    // dummy heads
    ListNode* zeroHead = new ListNode(-1);
    ListNode* oneHead  = new ListNode(-1);
    ListNode* twoHead  = new ListNode(-1);

    ListNode* zero = zeroHead;
    ListNode* one  = oneHead;
    ListNode* two  = twoHead;

    ListNode* temp = head;

    // segregate nodes
    while (temp != NULL) {
        if (temp->val == 0) {
            zero->next = temp;
            zero = temp;
        }
        else if (temp->val == 1) {
            one->next = temp;
            one = temp;
        }
        else {
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }

    // merge lists
    zero->next = (oneHead->next != NULL) ? oneHead->next : twoHead->next;
    one->next  = twoHead->next;
    two->next  = NULL;

    // new head
    ListNode* newHead = zeroHead->next;

    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;
}

int main() {
    // create linked list: 1 -> 2 -> 0 -> 1 -> 2 -> 0
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(1);
    head->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next = new ListNode(0);

    cout << "Before sorting: ";
    printList(head);

    head = sortList(head);

    cout << "After sorting: ";
    printList(head);

    return 0;
}
