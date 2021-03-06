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
    ListNode* middleNode(ListNode* head) {
      //  int cnt=0;
      //  ListNode* current=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next) {
            slow=slow->next;
            fast=fast->next->next;
        }
     //   head=slow;
        /*
        if(current->next==NULL) return head;
        
        while(current!=NULL){
            cnt++;
            current=current->next;
            
        }
        current=head;
        int mid;
      //  if(cnt%2==0) mid=(cnt/2);
         mid=cnt/2;
        while(current!=NULL){
            if(mid--==0) {head=current;break;}
            else current=current->next;
        }*/
        return slow;
    }
};