/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id chocolate-feast
 * @problem_address https://www.hackerrank.com/challenges/chocolate-feast
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
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int n, c, m;
        cin >> n >> c >> m;
        n /= c;
        int res = n;
        while(n >= m){
            res += n / m;
            n = n / m + n % m;
        }
        cout << res << endl;
    }
    return 0;
}
