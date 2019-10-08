bool isMirror(struct Node *root1, struct Node *root2) 
{ 
    if (root1 == NULL && root2 == NULL) 
        return true;  
    if (root1 && root2 && root1->key == root2->key) 
        return isMirror(root1->left, root2->right) && 
               isMirror(root1->right, root2->left); 
    return false; 
} 
// Returns true if a tree is symmetric i.e. mirror image of itself 
bool isSymmetric(struct Node* root) 
{ 
    return isMirror(root, root); 
} 
