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
        vector<ListNode *> address;
        ListNode* ptr = head;
        int tmp;
        int swap_st = k - 1;
        int swap_ed;
        while(ptr != nullptr){
            address.push_back(ptr);
            ptr = ptr->next;
        }
        swap_ed = address.size() - k;
        tmp = address[swap_st]->val;
        address[swap_st]->val = address[swap_ed]->val;
        address[swap_ed]->val = tmp;
        
        return head;
    }
};