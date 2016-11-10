/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id monk-and-power-of-time
 * @problem_address https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-power-of-time/
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
    vector<int> calls(n);
    for(int i = 0; i < n; i++){
        cin >> calls[i];
    }
    int *execs = new int[n];
    for(int i = 0; i < n; i++){
        cin >> execs[i];
    }
    int i = 0, j = 0, res = 0;
    while(j < n){
        res++;
        if(calls[i] == execs[j]){
            j++;
            calls.erase(calls.begin() + i);
        }else{
            i++;
        }
        if(calls.size() > 0){
            i %= calls.size();
        }
    }
    cout << res << endl;
    return 0;
}
