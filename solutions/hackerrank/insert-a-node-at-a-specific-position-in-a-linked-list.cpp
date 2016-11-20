/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id insert-a-node-at-a-specific-position-in-a-linked-list
 * @problem_address
 *https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
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

Node *InsertNth(Node *head, int data, int position) {
    Node *node = new Node();
    node->data = data;
    Node *curr = head, *pre = NULL;
    int pos = 0;
    while (pos < position) {
        if (curr == NULL)
            break;
        pre = curr;
        curr = curr->next;
        pos++;
    }
    node->next = curr;
    if (pre == NULL) {
        head = node;
    } else {
        pre->next = node;
    }
    return head;
}

int main(int argc, char *argv[]) { return 0; }
