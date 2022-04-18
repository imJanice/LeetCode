/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int idx = 0;
    int key;
    int ans = -1;
    int find(TreeNode* root){
        if(ans != -1){
            return -1;
        }
        if(root != NULL && root->left != NULL){
            find(root->left);
        }
        idx++;
        if(idx == key){
            ans = root->val;
            return -1;
        }
        if(root != NULL && root->right != NULL){
            find(root->right);
        }
        return -1;
    }
    int kthSmallest(TreeNode* root, int k) {
        key = k;
        find(root);
        return ans;
    }
};