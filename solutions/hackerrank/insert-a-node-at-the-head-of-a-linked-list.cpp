/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id insert-a-node-at-the-head-of-a-linked-list
 * @problem_address
 *https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list
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

Node *Insert(Node *head, int data) {
    Node *node = new Node();
    node->data = data;
    node->next = head;
    return node;
}

int main(int argc, char *argv[]) { return 0; }
