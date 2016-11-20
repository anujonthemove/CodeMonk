/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id insert-a-node-into-a-sorted-doubly-linked-list
 * @problem_address
 *https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list
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

Node *SortedInsert(Node *head, int data) {
    Node *node = new Node();
    node->data = data;
    node->prev = NULL;
    node->next = NULL;
    if (!head)
        return node;
    if (head->data >= data) {
        node->next = head;
        head->prev = node;
        return node;
    }
    Node *curr = head;
    while (true) {
        Node *next = curr->next;
        if (next == NULL)
            break;
        if (next->data > data)
            break;
        curr = next;
    }
    Node *next = curr->next;
    curr->next = node;
    node->prev = curr;
    node->next = next;
    if (next) {
        next->prev = node;
    }
    return head;
}

int main(int argc, char *argv[]) { return 0; }
