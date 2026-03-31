//delete all duplicate occurence 

#include <bits/stdc++.h>
using namespace std;

/*
Definition of doubly linked list:
*/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }

    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }

    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};

class Solution {
public:
    ListNode *removeDuplicates(ListNode *head) {
        if (head == NULL) return head;

        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {
            ListNode* nextnode = temp->next;

            // delete all duplicate nodes
            while (nextnode != NULL && nextnode->val == temp->val) {
                ListNode* dupli = nextnode;
                nextnode = nextnode->next;
                delete dupli;
            }

            // reconnect links
            temp->next = nextnode;
            if (nextnode != NULL)
                nextnode->prev = temp;

            temp = temp->next;
        }
        return head;
    }
};

/* -------- Helper functions for testing -------- */

// Insert at end
void insert(ListNode* &head, int val) {
    ListNode* newNode = new ListNode(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    ListNode* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Print list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Main (for VS Code)
int main() {
    ListNode* head = NULL;
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter sorted values:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert(head, x);
    }

    Solution obj;
    head = obj.removeDuplicates(head);

    cout << "After removing duplicates:\n";
    printList(head);

    return 0;
}
