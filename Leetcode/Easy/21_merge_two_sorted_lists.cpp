/*******************************************************************
* https://leetcode.com/problems/merge-two-sorted-lists/
* Easy
* 
* Conception: 
*  1. 
*
* Merge two sorted linked lists and return it as a new list.
* The new list should be made by splicing together the nodes of the first two lists.
*
*
* Key:
*  1. dummy node
*
* Reference:
*  1. 
*
*******************************************************************/
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 != NULL) return l2;
        if(l1 != NULL && l2 == NULL) return l1;
        if(l1 == NULL && l2 == NULL) return NULL;

        ListNode* head = new ListNode();
        ListNode* tmpHead = head;
        
        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                tmpHead->next = l1;
                l1 = l1->next;
            }else {
                tmpHead->next = l2;
                l2 = l2->next;
            }
            tmpHead = tmpHead->next;
            tmpHead->next = l1 == NULL ? l2 : l1;

        }
        return head->next;
        
    }
};