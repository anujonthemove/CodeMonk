/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id reverse-a-doubly-linked-list
 * @problem_address
 *https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list
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

Node *Reverse(Node *head) {
    if (!head)
        return NULL;
    if (!head->next) {
        head->prev = NULL;
        return head;
    }
    Node *reversed = Reverse(head->next);
    Node *curr = reversed;
    while (curr->next) {
        curr = curr->next;
    }
    head->next = NULL;
    curr->next = head;
    head->prev = curr;
    return reversed;
}

int main(int argc, char *argv[]) { return 0; }
