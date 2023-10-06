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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        ListNode* ptr = head, *tail = head;
        int count = 0;
        while(ptr != NULL){
            count++;
            ptr = ptr->next;
        }
        if(k%count == 0) return head;
        k = k%count;
        k = count - k;
        ptr = head;
        while(k!=1){
            ptr = ptr->next;
            k--;
        }
        ListNode* ans = ptr->next;
        ptr->next = NULL;
        tail = ans;
        ptr = ans;
        while(tail != NULL){
            ptr = tail;
            tail = tail->next;
        }
        ptr->next = head;
        return ans;
    }
};
