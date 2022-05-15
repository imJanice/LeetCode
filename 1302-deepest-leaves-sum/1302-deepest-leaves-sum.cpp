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
    vector<int> v;
    void visit(TreeNode* root, int deep){
        if(deep == v.size()){
            v.push_back(root->val);
        }else{
            v[deep] += root->val;
        }
        if(root->right != NULL){
           visit(root->right, deep+1);
        }
        if(root->left != NULL){
           visit(root->left, deep+1);
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        visit(root, 0);
        return v[v.size()-1];
    }
};


/*  Runtime : 241 ms
    Memory  : 59.9 MB
map<int, int> m;
void visit(TreeNode* root, int deep){
    if(root->right != NULL){
       visit(root->right, deep+1);
    }
    //cout<<root->val<<endl;
    if(root->left != NULL){
       visit(root->left, deep+1);
    }
    if(m.find(deep) != m.end()){
        m[deep] += root->val;
    }else{
        m[deep] = root->val;
    }
}
int deepestLeavesSum(TreeNode* root) {
    visit(root, 0);
    return m.rbegin()->second;
}
*/