/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
int height(Node* root) {
    // Write your code here.
    int left_tree_height;
    int right_tree_height;

    if( root == NULL){
        return -1;
    }
    //using recursion
    left_tree_height = height(root->left);
    right_tree_height = height(root->right);

    return max(left_tree_height, right_tree_height) +1;
}
