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
    bool isPalindrome(ListNode* head) {
       vector<int> ll;
       ListNode* temp=head;
       while(temp!=NULL){
        ll.push_back(temp->val);
        temp=temp->next;
       }
       int l=0,r=ll.size()-1;
       while(l<r&&ll[l]==ll[r]){
        l++;
        r--;
       }
       return (l>=r);
    }
};