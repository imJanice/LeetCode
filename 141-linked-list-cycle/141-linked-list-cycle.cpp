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
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        
        ListNode *fast = head->next;
        ListNode *slow = head;
        
        while(slow != fast){
            if(fast == NULL || fast->next == NULL) return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return true;
    }
};

/** slowly version
bool hasCycle(ListNode *head) {
    set<ListNode *> exist;
    bool ans = false;
    while(head != NULL and head->next != NULL){
        if(exist.count(head) == 0){
            exist.insert(head);
        }else{
            ans = true;
            break;
        }
        head = head->next;
    }
    return ans;
}
**/