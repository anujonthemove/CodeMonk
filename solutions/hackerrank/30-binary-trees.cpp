/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-binary-trees
 * @problem_address https://www.hackerrank.com/challenges/30-binary-trees
 **/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class Node {
  public:
    int data;
    Node *left, *right;
    Node(int d) {
        data = d;
        left = right = NULL;
    }
};
class Solution {
  public:
    Node *insert(Node *root, int data) {
        if (root == NULL) {
            return new Node(data);
        } else {
            Node *cur;
            if (data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            } else {
                cur = insert(root->right, data);
                root->right = cur;
            }
            return root;
        }
    }
    void levelOrder(Node *root) {
        if (root == NULL) {
            return;
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty()) {
            Node *curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if (curr->left) {
                q.push(curr->left);
            }
            if (curr->right) {
                q.push(curr->right);
            }
        }
    }
};

int main(int argc, char *argv[]) {
    Solution myTree;
    Node *root = NULL;
    int T, data;
    cin >> T;
    while (T-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.levelOrder(root);
    return 0;
}
