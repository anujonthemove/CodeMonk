/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id detect-whether-a-linked-list-contains-a-cycle
 * @problem_address
 *https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle
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

bool has_cycle(Node *head) {
    Node *p1 = head, *p2 = head;
    while (p1 && p2) {
        p2 = p2->next;
        if (!p2)
            break;
        p2 = p2->next;
        if (!p2)
            break;
        p1 = p1->next;
        if (p1 == p2)
            return true;
    }
    return false;
}

int main(int argc, char *argv[]) { return 0; }
