//remove the nth node from back

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    // ---------- 2-PASS SOLUTION ----------
    ListNode* removeNthFromEndTwoPass(ListNode* head, int n) {
        int cnt = 0;
        ListNode* temp = head;

        // count length
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        // delete head
        if (cnt == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int res = cnt - n;
        temp = head;

        // move to node before deletion
        while (res > 1) {
            temp = temp->next;
            res--;
        }

        ListNode* delnode = temp->next;
        temp->next = temp->next->next;
        delete delnode;

        return head;
    }

    // ---------- 1-PASS SOLUTION ----------
    ListNode* removeNthFromEndOnePass(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        // move fast n steps
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // delete head case
        if (fast == NULL) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // move both pointers
        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* delnode = slow->next;
        slow->next = slow->next->next;
        delete delnode;

        return head;
    }
};

// helper function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    int n = 2;

    Solution obj;

    // ----- TWO PASS -----
    ListNode* headTwoPass = obj.removeNthFromEndTwoPass(head, n);
    cout << "After Two-Pass removal: ";
    printList(headTwoPass);

    // recreate list for one-pass demo
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // ----- ONE PASS -----
    ListNode* headOnePass = obj.removeNthFromEndOnePass(head, n);
    cout << "After One-Pass removal: ";
    printList(headOnePass);

    return 0;
}
