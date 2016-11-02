/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id a-very-big-sum
 * @problem_address https://www.hackerrank.com/challenges/a-very-big-sum
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
        long long num;
        cin >> num;
        res += num;
    }
    cout << res << endl;
    return 0;
}
