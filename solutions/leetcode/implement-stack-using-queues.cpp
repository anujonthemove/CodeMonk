/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id implement-stack-using-queues
 * @problem_address https://leetcode.com/problems/implement-stack-using-queues/
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

class Stack {
  private:
    queue<int> nums;

  public:
    // Push element x onto stack.
    void push(int x) {
        int n = nums.size();
        nums.push(x);
        for (int i = 0; i < n; i++) {
            nums.push(nums.front());
            nums.pop();
        }
    }

    // Removes the element on top of the stack.
    void pop() { nums.pop(); }

    // Get the top element.
    int top() { return nums.front(); }

    // Return whether the stack is empty.
    bool empty() { return nums.empty(); }
};

int main(int argc, char *argv[]) { return 0; }
