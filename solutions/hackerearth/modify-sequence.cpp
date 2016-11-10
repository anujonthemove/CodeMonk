/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id modify-sequence
 * @problem_address https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/modify-sequence/
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
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int pre = nums[0];
    for(int i = 1; i < n; i++){
        int now = nums[i];
        if(pre > 0){
            if(pre <= now){
                now -= pre;
            }else{
                break;
            }
        }
        pre = now;
    }
    cout << (pre == 0 ? "YES" : "NO") << endl;
    return 0;
}
