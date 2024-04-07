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
        if (!head || !head->next)
            return head;

        ListNode *n = new ListNode (head->val);
        ListNode *res = n;

        head = head->next;

        while (head != nullptr) {
            if (head->val > n->val) {
                ListNode *node = new ListNode (head->val);
                n->next = node;
                n = n->next;
            }

            head = head->next;
        }

        return res;
    }
};