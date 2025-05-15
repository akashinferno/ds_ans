struct TreeNode* insert(struct TreeNode* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }
    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }
    return root;
}


int findMax(struct TreeNode* root) {
    if (root==NULL) return -1;  
    
    struct TreeNode *max=root;
    while(max->right!=NULL){
        max=max->right;
    }
    return max->data;
    
}
