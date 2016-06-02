/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
    if (head === null) return null;
    
    var p = head, temp = null;
    while(p.next !== null)
    {
        head = p.next;
        p.next = temp;
        temp = p;
        p = head;
    }
    p.next = temp;
    
    return head;
};
