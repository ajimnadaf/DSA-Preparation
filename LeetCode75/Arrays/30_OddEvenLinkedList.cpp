// Problem: Odd Even Linked List
// Platform: LeetCode 75
// Approach: Separate odd and even nodes using pointers, then connect
// Time Complexity: O(n)
// Space Complexity: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        // Edge case
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* odd = head;              // 1st node
        ListNode* even = head->next;       // 2nd node
        ListNode* evenHead = even;         // even list ka start save

        while(even != NULL && even->next != NULL){

            // odd link update
            odd->next = even->next;
            odd = odd->next;

            // even link update
            even->next = odd->next;
            even = even->next;
        }

        // connect odd list with even list
        odd->next = evenHead;

        return head;
    }
};
