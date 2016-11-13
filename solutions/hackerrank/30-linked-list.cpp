/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-linked-list
 * @problem_address https://www.hackerrank.com/challenges/30-linked-list
 **/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <map>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
class Node {
  public:
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};
class Solution {
  public:
    Node *insert(Node *head, int data) {
        Node *pre = NULL, *curr = head;
        Node *node = new Node(data);
        while (curr) {
            pre = curr;
            curr = curr->next;
        }
        if (pre) {
            pre->next = node;
        } else {
            return node;
        }
        return head;
    }
    void display(Node *head) {
        Node *start = head;
        while (start) {
            cout << start->data << " ";
            start = start->next;
        }
    }
};
int main(int argc, char *argv[]) {
    Node *head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0) {
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
    return 0;
}
