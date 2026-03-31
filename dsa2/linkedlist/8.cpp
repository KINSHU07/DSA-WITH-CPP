//odd even linkedlist

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
    ListNode* covertArrToLL(vector<int> arr){
        if(arr.size() == 0) return NULL;

        ListNode* head = new ListNode(arr[0]);
        ListNode* mover = head;

        for(int i = 1; i < arr.size(); i++){
            ListNode* temp = new ListNode(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }

    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        vector<int> ans;

        ListNode* temp = head;
        while(temp != NULL){
            ans.push_back(temp->val);
            if(temp->next == NULL) break;
            temp = temp->next->next;
        }

        ListNode* temp1 = head->next;
        while(temp1 != NULL){
            ans.push_back(temp1->val);
            if(temp1->next == NULL) break;
            temp1 = temp1->next->next;
        }

        return covertArrToLL(ans);
    }
};

// helper function to print linked list
void printList(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


// optimal

 ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* even_head = head->next;
        while(even != NULL && even->next != NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }
        odd->next = even_head;
        return head;
    }
int main() {
    // create linked list manually: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    ListNode* result = obj.oddEvenList(head);

    cout << "Odd Even List: ";
    printList(result);

    return 0;
}
