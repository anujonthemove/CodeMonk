/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id monk-and-chamber-of-secrets
 * @problem_address
 *https://www.hackerearth.com/codemonk-stacks-queues-1/algorithm/monk-and-chamber-of-secrets/
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

typedef struct Spider {
    int power;
    int pos;
} Spider;

int main(int argc, char *argv[]) {
    int n, m;
    cin >> n >> m;
    queue<Spider> spiders;
    for (int i = 1; i <= n; i++) {
        Spider spider;
        cin >> spider.power;
        spider.pos = i;
        spiders.push(spider);
    }
    for (int i = 0; i < m; i++) {
        Spider best = spiders.front();
        queue<Spider> removedSpiders;
        for (int j = 0; j < m; j++) {
            if (spiders.empty()) {
                break;
            }
            Spider spider = spiders.front();
            spiders.pop();
            if (spider.power > best.power) {
                best = spider;
            }
            removedSpiders.push(spider);
        }
        cout << best.pos << " ";
        bool found = false;
        while (!removedSpiders.empty()) {
            Spider spider = removedSpiders.front();
            removedSpiders.pop();
            if (!found) {
                if (spider.power == best.power) {
                    found = true;
                    continue;
                }
            }
            spider.power = max(0, spider.power - 1);
            spiders.push(spider);
        }
    }
    return 0;
}
