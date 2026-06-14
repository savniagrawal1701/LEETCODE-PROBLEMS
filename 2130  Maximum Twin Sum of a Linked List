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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while (curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        int max_sum = 0;
        ListNode* first_half = head;
        ListNode* second_half = prev;
        while (second_half) {
            int current_sum = first_half->val + second_half->val;
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
            first_half = first_half->next;
            second_half = second_half->next;
        }

        return max_sum;
    }
};
