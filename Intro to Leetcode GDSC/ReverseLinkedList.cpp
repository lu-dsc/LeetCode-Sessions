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
    // Idea: iterate through the whole linked list and keep track
    // of the previous, current, and next nodes. Then we switch the
    // pointers in a specific order so that we are able to traverse
    // the linked list without losing the reference of it. Finally,
    // we return prev when we run out of elements, since this will be
    // the new head of the reverse linked list.
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* cur = head;
        ListNode* next = nullptr;
        while(cur){ // Iterate while we have not reached the end of the linked list
            // Start:       ____ <-prev  cur/next -> ____ (prev and next null at begin)
            next = cur->next; // <-prev    cur    -> next (prev still null here at begin)
            cur->next = prev; // <-prev <- cur    next
            prev = cur; //       ____ <-prev/cur  next
            cur = next;  //      ____ <-  prev   cur/next -> ____
        }
        return prev;
    }
};
