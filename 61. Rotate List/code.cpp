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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL) return head;

        ListNode* curr=head;
        int n=0;

        while(curr!=NULL){
            n++;
            curr=curr->next;
        }

        k=k%n;

        if(k==0){
            return head;
        }

        n=n-k;

        curr=head;
        ListNode* prev=NULL;

        while(n){
            prev=curr;
            curr=curr->next;
            n--;
        }

        prev->next=NULL;

        prev=curr;

        while(prev->next!=NULL){
            prev=prev->next;
        }

        prev->next=head;

        return curr;
        
    }
};
