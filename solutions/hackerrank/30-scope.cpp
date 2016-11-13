/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-scope
 * @problem_address https://www.hackerrank.com/challenges/30-scope
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

class Difference {
  private:
    vector<int> elements;

  public:
    int maximumDifference;
    Difference(vector<int> elements) { this->elements = elements; }
    void computeDifference() {
        vector<int> nums = elements;
        sort(nums.begin(), nums.end());
        maximumDifference = nums.back() - nums.front();
    }
};

int main(int argc, char *argv[]) {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;
    return 0;
}
