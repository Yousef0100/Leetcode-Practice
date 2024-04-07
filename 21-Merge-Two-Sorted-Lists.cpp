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
        ListNode *n1 = list1;
        ListNode *n2 = list2;
        
        ListNode *res = new ListNode (1);
        ListNode *dummyHead = res;
        while (n1 != nullptr && n2 != nullptr) {
            if (n1->val <= n2->val) {
                res->next = n1;
                n1 = n1->next;
            } else {
                res->next = n2;
                n2 = n2->next;
            }

            res = res->next;
        }

        if (n1)
            res->next = n1;

        if (n2)
            res->next = n2;

        return dummyHead->next;
    }
};