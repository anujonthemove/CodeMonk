/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id compare-two-linked-lists
 * @problem_address
 *https://www.hackerrank.com/challenges/compare-two-linked-lists
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

int CompareLists(Node *headA, Node *headB) {
    Node *currA = headA, *currB = headB;
    while (currA != NULL && currB != NULL) {
        if (currA->data != currB->data)
            return 0;
        currA = currA->next;
        currB = currB->next;
    }
    return currA == currB;
}

int main(int argc, char *argv[]) { return 0; }
