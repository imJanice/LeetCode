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
    vector<TreeNode*> address;
    vector<TreeNode*> node;
    TreeNode* ans = NULL;
    TreeNode* tmp = NULL;
    TreeNode* reverse(TreeNode* root){
        if(root == 0){
            return NULL;
        }
        if(root->left != 0){
            reverse(root->left);
        }
        // this is the key part
        if(!ans){
            ans = new TreeNode(root->val); 
            tmp = ans;
        }else{
            tmp->right = new TreeNode(root->val);
            tmp = tmp->right;
        }
        
        if(ans == NULL){
            ans = root;
        }
        //value.push_back(root->val);
        if(root->right != 0){
            reverse(root->right);
        }
        return root;
    }
    TreeNode* increasingBST(TreeNode* root) { 
        root = reverse(root);
        return ans;
    }
};