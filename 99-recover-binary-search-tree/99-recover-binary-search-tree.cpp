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
    vector<TreeNode*> nodes;
    vector<int> v;
    void collect(TreeNode* root){
       if(root != NULL && root->left != NULL){
            collect(root->left);
        }
        v.push_back(root->val);
        nodes.push_back(root);
        if(root != NULL && root->right != NULL){
            collect(root->right);
        } 
    }
    void switchNode(int x, int y){
        int num = nodes[x]->val;
        nodes[x]->val = nodes[y]->val;
        nodes[y]->val = num;
    }
    int getIdx(int value){
        int idx=-1;
        for(int i=nodes.size()-1;i>=0;i--){
            if(nodes[i]->val == value){
                idx = i;
                break;
            }
        }
        return idx;
    }
    void recoverTree(TreeNode* root) {
        collect(root);
        vector<int> c(v);
        sort(c.begin(), c.end());
        int newi;
        for(int i=0;i<c.size();i++){
            if(c[i] != v[i]){
                newi = getIdx(c[i]);
                switchNode(i, newi);
                auto tmp = v[i];
                v[i] = v[newi];
                v[newi] = tmp;
            }
        }
    }
};