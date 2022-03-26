// https://leetcode.com/problems/merge-two-sorted-lists

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tmp1=list1,*tmp2=list2,*head=NULL,*prev=NULL;
        while(tmp1&&tmp2){
            if(tmp1->val<tmp2->val){
                if(head==NULL){
                    head=tmp1;
                    prev=tmp1;
                }
                else{
                    prev->next=tmp1;
                    prev=tmp1;
                }
                tmp1=tmp1->next;
            }
            else{
                 if(head==NULL){
                    head=tmp2;
                    prev=tmp2;
                }
                else{
                    prev->next=tmp2;
                    prev=tmp2;
                }
                tmp2=tmp2->next;
            }
        }
        if(tmp1) {
            if(head==NULL){
                head=tmp1;
            }
            else prev->next=tmp1;
        }
        if(tmp2){
             if(head==NULL){
                head=tmp2;
            }
            else prev->next=tmp2;
        }
        return head;
    }
};
