#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

vector<vector<int>> zigzagLevelOrder(Node* root) {
    vector<vector<int>> result;
    if (root == NULL) return result;

    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int size = q.size();
        vector<int> level(size);

        int i = 0;
        while (i < size) {
            Node* curr = q.front();
            q.pop();

            int index = leftToRight ? i : (size - 1 - i);
            level[index] = curr->data;

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);

            i++;
        }

        result.push_back(level);
        leftToRight = !leftToRight;
    }
    return result;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    vector<vector<int>> ans = zigzagLevelOrder(root);

    int i = 0;
    while (i < ans.size()) {
        int j = 0;
        while (j < ans[i].size()) {
            cout << ans[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
