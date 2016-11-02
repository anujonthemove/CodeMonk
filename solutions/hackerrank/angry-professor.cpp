/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id angry-professor
 * @problem_address https://www.hackerrank.com/challenges/angry-professor
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
        int n, k;
        cin >> n >> k;
        int c = 0;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            if(num <= 0){
                c += 1;
            }
        }
        if(c >= k){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
