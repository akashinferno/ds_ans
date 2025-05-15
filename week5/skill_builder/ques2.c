struct Node* insert(struct Node* root, int value) {
    if (root==NULL){
        return createNode(value);
        
    }
    else if(value<root->data){
        root->left =insert(root->left,value);
        
    }
    else{
        root->right =insert(root->right,value);
    }
    return root;
    
}

void printPreorder(struct Node* node) {
    if(node!=NULL) {
        printf("%d ",node->data);
        printPreorder(node->left);
        printPreorder(node->right);
    }
    return;
    
}
