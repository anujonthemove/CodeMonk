/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id signal-range
 * @problem_address https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/signal-range/
 **/

#include <set>
#include <map>
#include <cmath>
#include <regex>
#include <stack>
#include <vector>
#include <string>
#include <cstdio>
#include <sstream>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]){
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        stack<int> biggers;
        biggers.push(0);
        cout << 1 << " ";
        for(int i = 1; i < n; i++){
            int num = nums[i];
            while(biggers.size() > 0 && nums[biggers.top()] <= num){
                biggers.pop();
            }
            int res = i + 1;
            if(biggers.size() > 0){
                res = i - biggers.top();
            }
            biggers.push(i);
            cout << res << " ";
        }
        cout << endl;
    }
    return 0;
}
