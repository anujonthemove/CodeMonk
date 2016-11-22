/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id binary-search-tree-lowest-common-ancestor
 * @problem_address
 *https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor
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

vector<node *> getAncestors(node *root, int v) {
    vector<node *> res;
    if (!root)
        return res;
    if (root->data == v) {
        res.push_back(root);
        return res;
    }
    if (root->data < v) {
        res = getAncestors(root->right, v);
        res.push_back(root);
    } else {
        res = getAncestors(root->left, v);
        res.push_back(root);
    }
    return res;
}

node *lca(node *root, int v1, int v2) {
    vector<node *> a1 = getAncestors(root, v1);
    vector<node *> a2 = getAncestors(root, v2);
    node *best = NULL;
    int n1 = a1.size(), n2 = a2.size(), n = min(n1, n2);
    for (int i = 0; i < n; i++) {
        if (a1[n1 - 1 - i] == a2[n2 - 1 - i]) {
            best = a1[n1 - 1 - i];
        } else {
            break;
        }
    }
    return best;
}

int main(int argc, char *argv[]) { return 0; }
