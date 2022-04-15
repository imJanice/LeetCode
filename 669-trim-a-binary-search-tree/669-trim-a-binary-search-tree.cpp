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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        //If the node is empty, return directly
        if (root == NULL)
            return NULL;
        // If the current node is less than low,
        // then he and his left child nodes are
        // also less than low, we need to cut them off
        if (root->val < low)
            return trimBST(root->right, low, high);
        //Ditto
        if (root->val > high)
            return trimBST(root->left, low, high);
        cout<<"val:"<<root->val<<endl;
        cout<<trimBST(root->left, low, high)<<endl;
        cout<<trimBST(root->right, low, high)<<endl;
        root->left = trimBST(root->left, low, high); // if left is overflow than it will eventually return 
        root->right = trimBST(root->right, low, high);
    
        return root;
    }
};