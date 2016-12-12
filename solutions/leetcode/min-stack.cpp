/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id min-stack
 * @problem_address https://leetcode.com/problems/min-stack/
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

class MinStack {
  private:
    stack<int> nums1, nums2;

  public:
    MinStack() {}

    void push(int x) {
        if (nums2.empty() || x <= getMin()) {
            nums2.push(x);
        }
        nums1.push(x);
    }

    void pop() {
        if (top() == getMin()) {
            nums2.pop();
        }
        nums1.pop();
    }

    int top() { return nums1.top(); }

    int getMin() { return nums2.top(); }
};

int main(int argc, char *argv[]) { return 0; }
