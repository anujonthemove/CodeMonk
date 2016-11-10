/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id range-query-2
 * @problem_address https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/range-query-2/
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
    int n, Q;
    cin >> n >> Q;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    for(int q = 0; q < Q; q++){
        int op, a, b;
        cin >> op;
        if(op == 1){
            scanf("%d", &a);
            a--;
            nums[a] = 1 - nums[a];
        }else{
            scanf("%d", &a);
            scanf("%d", &b);
            b--;
            cout << (nums[b] == 0 ? "EVEN" : "ODD") << endl;
        }
    }
    return 0;
}
