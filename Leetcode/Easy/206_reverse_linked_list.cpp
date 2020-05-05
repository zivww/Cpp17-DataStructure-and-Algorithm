/*******************************************************************
* https://leetcode.com/problems/reverse-linked-list/
* Easy
* 
* Conception: 
*  1. https://www.geeksforgeeks.org/reverse-a-linked-list/
*
* Reverse a singly linked list.
*
*
* Explanation:
* 
* Step 0: ListNode* prev = NULL;
*         ListNode* next = NULL;
*         ListNode* curr = head;
* 
*           curr head
*              v v
*    NULL      "1" -> "2" -> "3" -> NULL
* prev^ ^next
*
*
* Step 1: next = curr->next; //next move back
* 
*           curr head
*              v v
*    NULL      "1" -> "2" -> "3" -> NULL
* prev^                ^next
*
*
* Step 2: curr->next = prev; // curr->next reverse direction
* 
*           curr head
*              v v
*    NULL  <-- "1"    "2" -> "3" -> NULL
* prev^                ^next
*
*
* Step 3: prev = curr;  // prev moves back ( old curr)
*         curr = next;  // curr move back ( new curr)
* 
*                head  curr
*                v     v
*    NULL  <-- "1"    "2" -> "3" -> NULL
*           prev^      ^next
*
*
* Key:
*  1. 
*
* Advanced:
*  1. 
*
*******************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* next = NULL;
        ListNode* curr = head;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
};