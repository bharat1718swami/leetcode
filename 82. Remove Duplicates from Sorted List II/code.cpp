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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL) return head;
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        // int count=0;

        while(curr!=NULL&&curr->next!=NULL){
            ListNode* forward=curr->next;


            if(curr->val==forward->val){
                while(forward!=NULL&&forward->val==curr->val){
                    forward=forward->next;
                    // count++;
                }

                if(prev==NULL){
                    head=forward;
                    curr=forward;
                }
                else{
                    prev->next=forward;
                    curr=forward;
                }

            }

            else{
                prev=curr;
                curr=curr->next;
            }
        }

        return head;
    }
};
