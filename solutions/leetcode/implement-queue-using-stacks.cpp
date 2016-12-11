/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id implement-queue-using-stacks
 * @problem_address https://leetcode.com/problems/implement-queue-using-stacks/
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

class Queue {
  private:
    stack<int> nums, helper;

  public:
    // Push element x to the back of queue.
    void push(int x) {
        while (!nums.empty()) {
            helper.push(nums.top());
            nums.pop();
        }
        nums.push(x);
        while (!helper.empty()) {
            nums.push(helper.top());
            helper.pop();
        }
    }

    // Removes the element from in front of queue.
    void pop(void) { nums.pop(); }

    // Get the front element.
    int peek(void) { return nums.top(); }

    // Return whether the queue is empty.
    bool empty(void) { return nums.empty(); }
};

int main(int argc, char *argv[]) { return 0; }
