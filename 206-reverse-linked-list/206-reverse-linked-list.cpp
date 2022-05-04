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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        vector<int> v;
        int idx;
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        idx = v.size()-1;
        ListNode* ans = new ListNode(v[idx]);
        ListNode* tg = ans;
        while(idx--){
            ListNode* tmp = new ListNode(v[idx]);
            tg->next = tmp;
            tg = tg->next;
        }
        return ans;
    }
};