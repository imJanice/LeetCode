/*TreeNode* tmp;
if(root != NULL && root->right != NULL){
tmp = convertBST(root->right);
if(root->right->left != NULL){
root->val += root->right->left->val;
}else{
root->val += tmp->val;
}
}
if(root != NULL && root->left != NULL){
root->left->val += convertBST(root->left)->val + root->val - root->left->val;
}*/