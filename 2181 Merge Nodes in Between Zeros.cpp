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
    ListNode* mergeNodes(ListNode* head) {
      int sum=0;
       ListNode* temp=head->next;
        ListNode* assign=head;
       while(temp!=nullptr){
        if(temp->val==0){
        assign->val=sum;
        
            sum=0;
            if (temp->next != nullptr) {
                    assign = assign->next;
                }
        }else{
            sum=sum+temp->val;
        }
        temp=temp->next;
       }
       assign->next=nullptr;
       return head; 
    }
};
