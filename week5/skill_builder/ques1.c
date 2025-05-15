struct TreeNode* insert(struct TreeNode* root, int key) {
    if (root==NULL){
        return createNode(key);
    }
    if(key < root->data){
        root->left= insert(root->left,key);
    }
    else if(key > root->data){
        root->right= insert(root->right,key);
    }
    return root;
}

struct TreeNode* findMin(struct TreeNode* root) {
    struct TreeNode *min=root;
    while(min && min->left!=NULL){
        min=min->left;
    }
    return min;
    
}

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (root==NULL) return root;
    else if(key< root->data){
        root->left=deleteNode(root->left,key);
    }
    else if(key >root->data){
        root->right=deleteNode(root->right,key);
    }
    else{
        //item is found
        if (root->left==NULL){
           struct TreeNode *temp=root->right;
           free(root);
           return temp;
        }
        
        else if (root->right==NULL){
           struct TreeNode *temp=root->left;
           free(root);
           return temp;
        }
        else{
            struct TreeNode *temp= findMin(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
            return root;
        }
        
    }//else
    
    
     return root   ;
}//func end

void inorderTraversal(struct TreeNode* root) {
    if(root!=NULL){
        inorderTraversal(root->left);
        printf("%d ",root->data);
        inorderTraversal(root->right);
        
    }
    return;
    
}
