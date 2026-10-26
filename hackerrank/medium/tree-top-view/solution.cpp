

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void topView(Node * root) {
        if (root == NULL) return;

        map<int, int> topNodeMap;
        queue<pair<Node*, int>> q;
    
        q.push({root, 0});
    
    while (!q.empty()) {
        auto front = q.front();
        q.pop();
        
        Node* curr = front.first;
        int hd = front.second;
        
        if (topNodeMap.find(hd) == topNodeMap.end()) {
            topNodeMap[hd] = curr->data;
        }
        
        if (curr->left != NULL) {
            q.push({curr->left, hd - 1});
        }
        if (curr->right != NULL) {
            q.push({curr->right, hd + 1});
        }
    }
    
    for (auto it : topNodeMap) {
        cout << it.second << " ";
    }

    }

