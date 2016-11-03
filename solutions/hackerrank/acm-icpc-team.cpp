/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id acm-icpc-team
 * @problem_address https://www.hackerrank.com/challenges/acm-icpc-team
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

int count(string a, string b, int m){
    int res = 0;
    for(int i = 0; i < m; i++){
        if(a[i] == '1' || b[i] == '1'){
            res += 1;
        }
    }
    return res;
}

int main(int argc, char *argv[]){
    int n, m;
    cin >> n >> m;
    fgetc(stdin);
    string *ps = new string[n];
    for(int i = 0; i < n; i++){
        getline(cin, ps[i]);
    }
    int max = 0, max_c = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int c = count(ps[i], ps[j], m);
            if(c > max){
                max = c;
                max_c = 1;
            }else if(c == max){
                max_c += 1;
            }
        }
    }
    cout << max << endl;
    cout << max_c << endl;
    return 0;
}
