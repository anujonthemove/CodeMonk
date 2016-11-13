/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-linked-list-deletion
 * @problem_address
 *https://www.hackerrank.com/challenges/30-linked-list-deletion
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
    Node *removeDuplicates(Node *head) {
        if (head == NULL) {
            return head;
        }
        Node *pre = head, *curr = head->next;
        while (curr) {
            if (curr->data == pre->data) {
                pre->next = curr->next;
            } else {
                pre = curr;
            }
            curr = curr->next;
        }
        return head;
    }
    Node *insert(Node *head, int data) {
        Node *p = new Node(data);
        if (head == NULL) {
            head = p;

        } else if (head->next == NULL) {
            head->next = p;

        } else {
            Node *start = head;
            while (start->next != NULL) {
                start = start->next;
            }
            start->next = p;
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
    head = mylist.removeDuplicates(head);
    return 0;
}
