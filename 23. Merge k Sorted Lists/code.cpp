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
        if(arr1==NULL) return arr2;
        if(arr2==NULL) return arr1;

        if(arr1->val>arr2->val){
            ListNode* arr=arr1;
            arr1=arr2;
            arr2=arr;
        }

        ListNode* curr=arr1->next;
        ListNode* prev=arr1;

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
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.size()==0) return NULL;

        ListNode* ans=lists[0];

        for(int i=1;i<lists.size();i++){
            ans=merge(ans,lists[i]);
        }

        return ans;
        
    }
};
