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
// geting the size
int size(ListNode *head)
    {
        ListNode * tem = head;
        int cnt = 0;
        while(tem != NULL)
        {
            cnt++;
            tem = tem->next;
        }
        return cnt;
    }

    ListNode* middleNode(ListNode* head) {
        int sz  = size(head);
        ListNode * tem = head;
        for(int i=1; i<=sz/2; i++)
        {
            tem = tem->next;
        }
        return tem;
    }
};