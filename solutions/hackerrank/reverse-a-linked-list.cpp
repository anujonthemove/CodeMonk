/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id reverse-a-linked-list
 * @problem_address https://www.hackerrank.com/challenges/reverse-a-linked-list
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
    if (head == NULL)
        return NULL;
    Node *reversed = Reverse(head->next);
    if (reversed == NULL)
        return head;
    Node *pre = NULL, *curr = reversed;
    while (curr != NULL) {
        pre = curr;
        curr = curr->next;
    }
    pre->next = head;
    head->next = NULL;
    return reversed;
}

int main(int argc, char *argv[]) { return 0; }
