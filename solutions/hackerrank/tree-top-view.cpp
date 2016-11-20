/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id tree-top-view
 * @problem_address https://www.hackerrank.com/challenges/tree-top-view
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

void top_view(node *root) {
    if (!root)
        return;
    node *curr = root->left;
    vector<node *> nodes;
    while (curr) {
        nodes.push_back(curr);
        curr = curr->left;
    }
    for (int i = nodes.size() - 1; i >= 0; i--) {
        cout << nodes[i]->data << " ";
    }
    cout << root->data << " ";
    curr = root->right;
    while (curr) {
        cout << curr->data << " ";
        curr = curr->right;
    }
}

int main(int argc, char *argv[]) { return 0; }
