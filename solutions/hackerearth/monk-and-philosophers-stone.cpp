/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id monk-and-philosophers-stone
 * @problem_address
 *https://www.hackerearth.com/codemonk-stacks-queues-1/algorithm/monk-and-philosophers-stone/
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

int main(int argc, char *argv[]) {
    int n, Q, target, sum = 0;
    queue<int> harrys;
    stack<int> monks;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        harrys.push(num);
    }
    cin >> Q >> target;
    int res = -1;
    if (sum == target) {
        res = 0;
    } else {
        for (int q = 0; q < Q; q++) {
            string op;
            cin >> op;
            if (op == "Harry") {
                int num = harrys.front();
                harrys.pop();
                monks.push(num);
                sum += num;
            } else {
                int num = monks.top();
                monks.pop();
                sum -= num;
            }
            if (sum == target) {
                res = monks.size();
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}
