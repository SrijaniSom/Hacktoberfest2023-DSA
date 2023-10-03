// Given a linked list of N nodes. The task is to reverse this list.

// Example 1:

// Input:
// LinkedList: 1->2->3->4->5->6
// Output: 6 5 4 3 2 1
// Explanation: After reversing the list, 
// elements are 6->5->4->3->2->1.

// Solution:

//  Definition for singly-linked list.
//  struct ListNode {
//        int val;
//        ListNode *next;
//        ListNode() : val(0), next(nullptr) {}
//        ListNode(int x) : val(x), next(nullptr) {}
//        ListNode(int x, ListNode *next) : val(x), next(next) {}
//    };
 

class Solution {
public:

    ListNode* reverseList(ListNode* head) {

       //step 1
        ListNode* prev_p = NULL;
        ListNode* current_p = head;
        ListNode* next_p;
       
       //step 2
        while(current_p) {

            next_p = current_p->next;
            current_p->next = prev_p;
            
            prev_p = current_p;
            current_p = next_p;
        }

        head = prev_p; //step 3
        return head;
      }
};
