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
    bool hasCycle(ListNode *head) {
        ListNode* n = head;

        for (int i = 0; i < 1e4 + 1; ++i) {
            if (n == nullptr)
                return false;
            
            n = n->next;
        }

        return true;
    }
};