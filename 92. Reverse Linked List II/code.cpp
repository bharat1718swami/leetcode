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

    ListNode* reverse(ListNode* head, int n){
        ListNode* curr=head;
        ListNode* prev=NULL;

        while(n){
            ListNode* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            n--;
        }

        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        //if Both are same means they point single element so List is same
        if(left==right) return head;

        // My approch is to break list in three parts left, mid, right 
        // reverse the mid part and connect them

        ListNode* curr=head;       // to trevarse in List
        ListNode* leftNode=NULL;     // this is last Node of left List
        int r=right-left+1;          // for finding 1st Node of Right list
        int l=left;                    // for finding last Node of left part

        // finding last Node of left part
        while(l-1){
            leftNode=curr;
            curr=curr->next;
            l--;
        }

        ListNode* midRight=curr;        // last Node of mid part after reversing


        // finding 1st Node of Right part
        int temp=r;
        while(temp){
            curr=curr->next;
            temp--;
        }

        ListNode* Right=curr;  // 1st Node of right part
        

        ListNode* midleft=reverse(midRight,r);     // 1st Node of mid part


        // As if there is no left part or we can say left==1
        //then we just merge mid and right part and return mid 1st(midleft)
        if(leftNode==NULL){

            midRight->next=Right;
            return midleft;
        }

        // if all three parts are present then mergeing all of them
        leftNode->next=midleft;
        midRight->next=Right;

        return head;
        
    }
};
