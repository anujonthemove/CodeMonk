/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id merge-two-sorted-linked-lists
 * @problem_address
 *https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists
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

Node *MergeLists(Node *headA, Node *headB) {
    Node *head = new Node();
    Node *curr = head, *currA = headA, *currB = headB;
    while (currA != NULL || currB != NULL) {
        Node *node = new Node();
        if (currA == NULL) {
            node->data = currB->data;
            currB = currB->next;
        } else if (currB == NULL) {
            node->data = currA->data;
            currA = currA->next;
        } else {
            if (currA->data < currB->data) {
                node->data = currA->data;
                currA = currA->next;
            } else {
                node->data = currB->data;
                currB = currB->next;
            }
        }
        curr->next = node;
        curr = curr->next;
    }
    return head->next;
}

int main(int argc, char *argv[]) { return 0; }
