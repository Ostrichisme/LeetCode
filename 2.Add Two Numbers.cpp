
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode root(-1), *p = &root;
        int carry = 0, sum;

        while(l1 || l2 || carry){
            sum = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            p->next = new ListNode(sum%10);
            carry = sum/10;

            p = p->next;
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;

        }

        return root.next;

    }
};
