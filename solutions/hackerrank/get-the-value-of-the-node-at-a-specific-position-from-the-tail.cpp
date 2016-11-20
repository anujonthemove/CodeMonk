/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id get-the-value-of-the-node-at-a-specific-position-from-the-tail
 * @problem_address
 *https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail
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

int GetNode(Node *head, int positionFromTail) {
    if (head->next == NULL) {
        if (positionFromTail == 0) {
            return head->data;
        }
        return -1;
    }
    int depth = GetNode(head->next, positionFromTail);
    if (depth >= 0)
        return depth;
    depth--;
    if (depth == -positionFromTail - 1)
        return head->data;
    return depth;
}

int main(int argc, char *argv[]) { return 0; }
