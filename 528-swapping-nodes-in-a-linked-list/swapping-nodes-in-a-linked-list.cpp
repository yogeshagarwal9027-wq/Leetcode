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
    ListNode* swapNodes(ListNode* head, int k) {
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        ListNode *first=head;
        for(int i=0;i<k-1;i++){
            first=first->next;
        }
        int l=len-k+1;
        ListNode* Last=head;
        for(int i=0;i<l-1;i++){
            Last=Last->next;
        }
        swap(first->val,Last->val);
        return head;
    }
};