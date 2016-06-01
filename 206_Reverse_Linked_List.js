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
    var tmpHead = head;
    var tmpNext = null;
    while(tmpHead.next !== null) {
        head = tmpHead.next;
        tmpHead.next = tmpNext;
        tmpNext = tmpHead;
        tmpHead = head;
    }
    tmpHead.next = tmpNext;
    
    return head;
};
