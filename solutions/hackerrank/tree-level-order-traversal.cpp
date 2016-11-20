/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id tree-level-order-traversal
 * @problem_address
 *https://www.hackerrank.com/challenges/tree-level-order-traversal
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

void LevelOrder(node *root) {
    std::queue<node *> nodes;
    nodes.push(root);
    while (!nodes.empty()) {
        node *item = nodes.front();
        nodes.pop();
        if (!item)
            continue;
        cout << item->data << " ";
        nodes.push(item->left);
        nodes.push(item->right);
    }
}

int main(int argc, char *argv[]) { return 0; }
