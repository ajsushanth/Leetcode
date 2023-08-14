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
        if(head==NULL || head->next==NULL) return head;
        ListNode* tail = head;
        ListNode* prev = head;
        int n=1;
        while(tail!=NULL && tail->next!=NULL){
            tail = tail->next;
            n++;
        }
        if(k>=n) k = k%n;
        tail = head;
        while(k-->0){
            prev = head;
            while(tail!=NULL && tail->next!=NULL){
                prev = tail;
                tail = tail->next;
            }
            prev->next = NULL;
            tail->next = head;
            head = tail;
        }
        return head;      
    }
};