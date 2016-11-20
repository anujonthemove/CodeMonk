/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id binary-search-tree-insertion
 * @problem_address
 *https://www.hackerrank.com/challenges/binary-search-tree-insertion
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

node *insert(node *root, int value) {
    node *item = new node();
    item->data = value;
    item->left = NULL;
    item->right = NULL;
    if (!root)
        return item;
    if (value <= root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

int main(int argc, char *argv[]) { return 0; }
