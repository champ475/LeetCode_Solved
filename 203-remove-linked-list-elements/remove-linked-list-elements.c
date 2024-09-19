/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* prev;
    struct ListNode* curr = head;
    struct ListNode* next;

    while(curr!=NULL){
        if(curr->val==val){
            if(curr==head){
                head = head->next;
            }
            else{
                prev->next = curr->next;
            }
            curr = curr->next;
        }
        else{
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}