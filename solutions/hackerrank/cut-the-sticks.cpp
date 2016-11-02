/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id cut-the-sticks
 * @problem_address https://www.hackerrank.com/challenges/cut-the-sticks
 **/

#include <set>
#include <map>
#include <cmath>
#include <regex>
#include <vector>
#include <string>
#include <cstdio>
#include <sstream>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        nums[i] = num;
    }
    sort(nums.begin(), nums.end());
    int pre = -1, c = 0;
    for(int i = 0; i < n; i++){
        int now = nums[i];
        if(pre != now){
            cout << n - c << endl;
        }
        c += 1;
        pre = now;
    }
    return 0;
}
