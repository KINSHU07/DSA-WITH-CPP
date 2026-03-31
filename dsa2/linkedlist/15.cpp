//length of the loop in ll

#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};


class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                int cnt = 1;
                fast= fast->next;
                while(slow != fast){
                    cnt++;
                    fast = fast->next;
                }
                return cnt;
            }
        }
       return 0;

    }
};

 int findLengthOfLoop(ListNode *head) {
        ListNode* temp = head;
        int timer = 1;
        map<ListNode* , int> mpp;
        while(temp != NULL){
            if(mpp.find(temp) != mpp.end()){
                return (timer - mpp[temp]);
            }
            mpp[temp] = timer;
            timer++;
            temp = temp->next;
        }
       return 0;

    }