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
};