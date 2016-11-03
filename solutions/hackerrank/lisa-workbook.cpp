/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id lisa-workbook
 * @problem_address https://www.hackerrank.com/challenges/lisa-workbook
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
    int n, k;
    cin >> n >> k;
    int page = 0, remains = k, res = 0;
    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;
        page += 1;
        remains = k;
        for(int j = 1; j <= num; j++){
            if(remains == 0){
                page += 1;
                remains = k;
            }
            remains -= 1;
            if(j == page){
                res += 1;
            }
        }
    }
    cout << res << endl;
    return 0;
}
