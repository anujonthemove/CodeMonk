/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id tree-height-of-a-binary-tree
 * @problem_address
 *https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree
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

int getHeight(Node *root) {
    if (!root)
        return -1;
    return 1 + max(getHeight(root->left), getHeight(root->right));
}

int main(int argc, char *argv[]) { return 0; }
