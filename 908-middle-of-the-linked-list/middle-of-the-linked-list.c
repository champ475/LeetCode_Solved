/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int length(struct ListNode* head){
    struct ListNode* curr = head;
    int l=0;
    while(curr!=NULL){
        l++;
        curr=curr->next;
    }
    return l;
}

struct ListNode* middleNode(struct ListNode* head) {
    int len = length(head);
    int mid = len/2;
    while(mid--){
        head = head->next;
    }
    return head;

}