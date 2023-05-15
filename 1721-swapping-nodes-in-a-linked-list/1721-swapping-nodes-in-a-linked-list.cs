/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode SwapNodes(ListNode head, int k) {
         ListNode leftNode = head;
        ListNode rightNode = head;

        for (int i = 1; i < k; i++) {
            leftNode = leftNode.next;
        }

        ListNode current = leftNode;
        while (current.next != null) {
            current = current.next;
            rightNode = rightNode.next;
        }

        int temp = leftNode.val;
        leftNode.val = rightNode.val;
        rightNode.val = temp;

        return head;
    }
}