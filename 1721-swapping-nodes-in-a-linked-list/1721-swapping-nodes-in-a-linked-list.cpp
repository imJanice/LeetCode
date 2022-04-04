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
        vector<int> num;
        ListNode* ptr = head;
        int tmp;
        int swap_st = k - 1;
        int swap_ed;
        while(ptr != nullptr){
            address.push_back(ptr);
            num.push_back(ptr->val);
            ptr = ptr->next;
        }
        swap_ed = address.size() - k;
        address[swap_st]->val = num[swap_ed];
        address[swap_ed]->val = num[swap_st];
        
        return head;
    }
};