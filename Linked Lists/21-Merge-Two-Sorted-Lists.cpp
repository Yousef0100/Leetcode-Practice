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
        ListNode* mergedList = new ListNode();
        ListNode* curr = mergedList;

        ListNode* node1 = list1, *node2 = list2;
        while (node1 && node2) {
            if (node1->val <= node2->val) {
                curr->next = node1;
                node1 = node1->next;
            } else {
                curr->next = node2;
                node2 = node2->next;
            }

            curr = curr->next;
        }

        while (node1) {
            curr->next = node1;
            node1 = node1->next;
            curr = curr->next;
        }

        while (node2) {
            curr->next = node2;
            node2 = node2->next;
            curr = curr->next;
        }

        return mergedList->next;
    }
};