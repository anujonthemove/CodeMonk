/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge leetcode
 * @problem_id top-k-frequent-elements
 * @problem_address https://leetcode.com/problems/top-k-frequent-elements/
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

class Solution {
  public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }
        int n;
        map<int, int>::iterator it;
        vector<pair<int, int>> heap;
        for (it = counts.begin(), n = k; it != counts.end() && n >= 1;
             it++, n--) {
            heap.push_back(pair<int, int>(-it->second, it->first));
        }
        make_heap(heap.begin(), heap.end());
        if (counts.size() > k) {
            for (; it != counts.end(); it++) {
                heap.push_back(pair<int, int>(-it->second, it->first));
                push_heap(heap.begin(), heap.end());
                pop_heap(heap.begin(), heap.end());
                heap.pop_back();
            }
        }
        vector<int> topK;
        while (heap.size() > 0) {
            topK.push_back(heap.front().second);
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();
        }
        reverse(topK.begin(), topK.end());
        return topK;
    }
};

int main(int argc, char *argv[]) { return 0; }
