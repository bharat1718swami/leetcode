// #include<bits/stdc++.h>
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        
        ListNode* ans=NULL;
        map<ListNode*,bool> m;

        while(headA!=NULL){
            m[headA]=true;
            headA=headA->next;
        }

        while(headB!=NULL){
            if(m[headB]==true){
                ans=headB;
                break;
            }
            headB=headB->next;
        }

        return ans;
        
    }
};
