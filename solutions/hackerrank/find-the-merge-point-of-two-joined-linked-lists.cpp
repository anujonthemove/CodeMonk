/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id find-the-merge-point-of-two-joined-linked-lists
 * @problem_address
 *https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists
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

int getDepth(Node *head) {
    int depth = 0;
    while (head) {
        depth++;
        head = head->next;
    }
    return depth;
}

int FindMergeNode(Node *headA, Node *headB) {
    int depthA = getDepth(headA), depthB = getDepth(headB),
        depth = min(depthA, depthB);
    while (depthA > depth) {
        headA = headA->next;
        depthA--;
    }
    while (depthB > depth) {
        headB = headB->next;
        depthB--;
    }
    while (headA->data != headB->data) {
        headA = headA->next;
        headB = headB->next;
    }
    return headA->data;
}

int main(int argc, char *argv[]) { return 0; }
