/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id delete-a-node-from-a-linked-list
 * @problem_address
 *https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list
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

Node *Delete(Node *head, int position) {
    Node *pre = NULL, *curr = head;
    int pos = 0;
    while (pos < position) {
        if (curr == NULL)
            break;
        pre = curr;
        curr = curr->next;
        pos++;
    }
    if (pre != NULL) {
        pre->next = curr->next;
    } else {
        head = head->next;
    }
    return head;
}

int main(int argc, char *argv[]) { return 0; }
