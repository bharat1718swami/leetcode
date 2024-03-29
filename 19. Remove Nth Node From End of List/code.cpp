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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int count=0;
        ListNode* curr=head;
        ListNode* prev=NULL;

        while(curr!=NULL){
            count++;
            curr=curr->next;
        }

        n=count-n;
        curr=head;

        if(n==0) return head->next;

        while(n){
            n--;  
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        return head;
        
    }
};
