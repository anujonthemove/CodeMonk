/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id simple-array-sum
 * @problem_address https://www.hackerrank.com/challenges/simple-array-sum
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
    long long res = 0;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        res += num;
    }
    cout << res << endl;
    return 0;
}
