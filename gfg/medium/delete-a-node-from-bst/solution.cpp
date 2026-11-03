/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
    Node* delNode(Node* root, int x) {
        // code here
        if (root == nullptr)
            return nullptr;
        
        if (x < root->data) {
            root->left = delNode(root->left, x);
        } else if (x > root->data){
            root->right = delNode(root->right,x);
        } else {
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            
            Node* curr = root->right;
            while(curr && curr->left != nullptr) {
                curr = curr->left;
            }
            root->data = curr->data;
            root->right = delNode(root->right, curr->data);
        }
        return root;
    }
};