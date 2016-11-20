/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id tree-preorder-traversal
 * @problem_address
 *https://www.hackerrank.com/challenges/tree-preorder-traversal
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

void preOrder(node *root) {
    if (!root)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(int argc, char *argv[]) { return 0; }
