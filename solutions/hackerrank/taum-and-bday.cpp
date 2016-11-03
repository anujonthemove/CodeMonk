/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id taum-and-bday
 * @problem_address https://www.hackerrank.com/challenges/taum-and-bday
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

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long b;
        long w;
        cin >> b >> w;
        long x;
        long y;
        long z;
        cin >> x >> y >> z;
        long min = x < y ? x : y, max = x > y ? x : y;
        long i = x < y ? b : w, j = x > y ? b : w;
        if(min + z < max){
            max = min + z;
        }
        cout << (min * i + max * j) << endl;
    }
    return 0;
}
