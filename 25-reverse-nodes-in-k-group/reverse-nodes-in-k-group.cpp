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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        while(n<k){
            if(temp==NULL) return head;
            temp=temp->next;
            n++;
        }

        ListNode* save=reverseKGroup(temp,k);
        temp=head;
        n=0;
        while(n<k){
            ListNode* Next=temp->next;
            temp->next=save;
            save=temp;
            temp=Next;
            n++;
        }
        return save;
    }
};