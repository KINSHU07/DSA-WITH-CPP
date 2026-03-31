//add one to linked list

#include <bits/stdc++.h>
using namespace std;

// Definition of singly linked list
struct ListNode {
    int val;
    ListNode* next;

    ListNode() {
        val = 0;
        next = NULL;
    }

    ListNode(int data1) {
        val = data1;
        next = NULL;
    }

    ListNode(int data1, ListNode* next1) {
        val = data1;
        next = next1;
    }
};

// Reverse linked list
ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

int helper(ListNode* temp){
    if(temp == NULL) return 1;
    int carry = helper(temp->next);
    temp->val += carry;
    if(temp->val < 10){
        return 0;
    }
    temp->val = 0;
    return 1;
}

ListNode* addone(ListNode* head){
    int carry = helper(head);
    if(carry == 1){
        ListNode* newnode = new ListNode(1);
        newnode->next = head;
        return newnode;

    }
    return head;
}
// Add 1 to the number represented by linked list
ListNode* addOne(ListNode* head) {
    // Reverse the list
    head = reverseList(head);

    ListNode* curr = head;
    int carry = 1;

    while (curr != NULL && carry) {
        int sum = curr->val + carry;
        curr->val = sum % 10;
        carry = sum / 10;

        if (curr->next == NULL && carry) {
            curr->next = new ListNode(carry);
            carry = 0;
        }
        curr = curr->next;
    }

    // Reverse back
    head = reverseList(head);
    return head;
}

// Insert at end
void insertAtEnd(ListNode*& head, int val) {
    ListNode* newNode = new ListNode(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    ListNode* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next != NULL) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = NULL;

    int n;
    cout << "Enter number of digits: ";
    cin >> n;

    cout << "Enter digits: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertAtEnd(head, x);
    }

    cout << "Original number: ";
    printList(head);

    head = addOne(head);

    cout << "After adding 1: ";
    printList(head);

    return 0;
}
