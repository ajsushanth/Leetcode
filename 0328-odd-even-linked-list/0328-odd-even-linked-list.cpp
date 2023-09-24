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
    ListNode* oddEvenList(ListNode* head) {
      if(head==NULL || head->next==NULL) return head;
        ListNode* ehead = NULL;
        ListNode* etail = NULL;
        ListNode* ohead = NULL;
        ListNode* otail = NULL;
        int index=1;
        while(head != NULL){
          if(index%2 == 0){
            if(ehead == NULL){
              ehead = head;
              etail = head;
            }
            else{
              etail->next = head;
              etail = etail->next;
            }
          }
          else{
            if(ohead == NULL){
              ohead = head;
              otail = head;
            }
            else{
              otail->next = head;
              otail = otail->next;
            }
          }
          head = head->next;
          index++;
        }
        otail->next = ehead;
        etail->next = NULL;
        return ohead;
    }
};