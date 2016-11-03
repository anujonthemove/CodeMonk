/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id utopian-tree
 * @problem_address https://www.hackerrank.com/challenges/utopian-tree
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
        int n;
        cin >> n;
        int h = 1;
        bool double_it = true;
        for(int i = 1; i <= n; i++){
            if(double_it){
                h *= 2;
            }else{
                h += 1;
            }
            double_it = !double_it;
        }
        cout << h << endl;
    }
    return 0;
}
