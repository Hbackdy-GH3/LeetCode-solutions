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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1->next;
        ListNode* temp2 = l2->next;
        ListNode* newhead = NULL;
        int s = (l1->val) + (l2->val);
        int r;
        if (s >= 10) {
            r = s % 10;
            newhead = new ListNode(r);
            s /= 10;
        } else {
            newhead = new ListNode(s);
            s = 0;
        }
        ListNode* temp = newhead;
        while (temp1 != NULL && temp2 != NULL) {
            s += ((temp1->val) + (temp2->val));
            if (s >= 10) {
                r = s % 10;
                temp->next = new ListNode(r);
                s /= 10;

            } else {
                temp->next = new ListNode(s);
                s=0;
            }
            temp = temp->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while (temp1 != NULL) {
            s += (temp1->val);
            if (s >= 10) {
                r = s % 10;
                temp->next = new ListNode(r);
                s /= 10;
            } else {
                temp->next = new ListNode(s);
                s=0;
            }
            temp1 = temp1->next;
            temp = temp->next;
        }
        while (temp2 != NULL) {
            s += (temp2->val);
            if (s >= 10) {
                r = s % 10;
                temp->next = new ListNode(r);
                s /= 10;
            } else {
                temp->next = new ListNode(s);
                s=0;
            }
            temp2 = temp2->next;
            temp = temp->next;
        }
        if (s > 0)
        temp->next = new ListNode(s);
        return newhead;
    }
};