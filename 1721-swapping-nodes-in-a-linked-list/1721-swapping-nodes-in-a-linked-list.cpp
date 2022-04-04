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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> num;
        vector<ListNode *> ptr;
        ListNode* tmp = head;
        int swap_st = k - 1;
        int swap_ed;
        while(tmp != nullptr){
            num.push_back(tmp->val);
            ptr.push_back(tmp);
            tmp = tmp->next;
        }
        swap_ed = num.size() - k;
        ptr[swap_st]->val = num[swap_ed];
        ptr[swap_ed]->val = num[swap_st];
        
        return head;
    }
};