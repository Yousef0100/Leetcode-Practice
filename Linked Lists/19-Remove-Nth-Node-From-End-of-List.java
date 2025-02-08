/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode prev = null;
        ListNode curr = head;
        ListNode dummy = head;
        
        while (n-- > 0) {
            head = head.next;
        }

        while (head != null) {
            prev = curr;
            curr = curr.next;
            head = head.next;
        }

        if (prev == null) return dummy.next;
        else 
            prev.next = curr.next;

        return dummy;
    }
}