//check if a linked list is palindrome or not

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Reverse a linked list
Node* reverseLinkedList(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* newHead = reverseLinkedList(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;

    return newHead;
}

// Check if linked list is palindrome
bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL)
        return true;

    Node* slow = head;
    Node* fast = head;

    // Find middle
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    Node* newHead = reverseLinkedList(slow->next);

    Node* first = head;
    Node* second = newHead;

    // Compare both halves
    while (second != NULL) {
        if (first->data != second->data) {
            reverseLinkedList(newHead); // restore list
            return false;
        }
        first = first->next;
        second = second->next;
    }

    // Restore list
    reverseLinkedList(newHead);
    return true;
}

// Insert at end
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertAtEnd(head, x);
    }

    if (isPalindrome(head))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}
