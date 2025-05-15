struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

void displayTreePostOrder(struct Node* root) {
    if (root == NULL) return;
    displayTreePostOrder(root->left);
    displayTreePostOrder(root->right);
    printf("%d ", root->data);
}


int findMinValue(struct Node* root) {
    if (root==NULL) return -1;
    struct Node *min=root;
    while(min->left!=NULL){
        min=min->left;
    }
    return min->data;
    
}
