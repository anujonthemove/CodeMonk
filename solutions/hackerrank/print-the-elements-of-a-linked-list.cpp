/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id print-the-elements-of-a-linked-list
 * @problem_address
 *https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list
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

void Print(Node *head) {
    Node *curr = head;
    while (curr) {
        cout << curr->data << endl;
        curr = curr->next;
    }
}

int main(int argc, char *argv[]) { return 0; }
