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

    ListNode* merge(ListNode* arr1, ListNode* arr2){

        //if any of one is NULL then return another one 
        if(arr1==NULL) return arr2;
        if(arr2==NULL) return arr1;

        //finding list whose 1st element is smaller
        if(arr1->val>arr2->val){
            ListNode* temp=arr1;
            arr1=arr2;
            arr2=temp;
        }

        //to make a window to check element lies between window or not
        ListNode* curr=arr1->next;
        ListNode* prev=arr1;


        //merging lists
        while(curr!=NULL&&arr2!=NULL){
            if(arr2->val>=prev->val&&arr2->val<curr->val){
                prev->next=arr2;
                prev=arr2;
                arr2=arr2->next;
                prev->next=curr;
            }
            else{
                curr=curr->next;
                prev=prev->next;
            }
        }

        if(curr==NULL){
            prev->next=arr2;
        }

        return arr1;
    }

    ListNode* sortList(ListNode* head) {

        //if there is only one node or NULL
        if(head==NULL||head->next==NULL){
            return head;
        }

        //to find mid of list
        ListNode* slow=head;
        ListNode* fast=head->next;

        //iterate to find mid of LinkedList
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }


        ListNode* temp=slow->next; //Storing the pointer of 2nd half
        
        slow->next=NULL;  //to break the list in two parts

        slow=sortList(head);  //it gives sorted list of first part
        fast=sortList(temp);  // It give sorted list of second part

        // merge to sorted list
        ListNode* ans=merge(slow, fast); 

        return ans;
        
    }
};
