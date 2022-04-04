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
        while(ptr != nullptr){
            address.push_back(ptr);
            ptr = ptr->next;
        }
        tmp = address[k - 1]->val;
        address[k - 1]->val = address[address.size() - k]->val;
        address[address.size() - k]->val = tmp;
        
        return head;
    }
};