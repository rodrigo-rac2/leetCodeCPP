/**
 * Problem: https://leetcode.com/problems/merge-two-sorted-lists/
 * 
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode(0); // Create a dummy head node
        ListNode *tail = dummy; // Tail pointer for the merged list

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next; // Advance the tail pointer
        }

        // Append remaining nodes from either list1 or list2
        tail->next = list1 != NULL ? list1 : list2;

        return dummy->next; // Return the head of the merged list (excluding the dummy node)
    }
};
