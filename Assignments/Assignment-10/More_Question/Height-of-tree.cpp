https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/submissions/code/310974108



/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if(root == NULL)
        {
            return -1;
        }
        return 1+max(height(root -> left),height(root -> right));
        // Write your code here.
    }
