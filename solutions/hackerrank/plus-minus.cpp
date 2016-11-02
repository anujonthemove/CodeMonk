/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id plus-minus
 * @problem_address https://www.hackerrank.com/challenges/plus-minus
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
    int c1 = 0, c2 = 0, c3 = 0;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num > 0){
            c1 += 1;
        }else if(num < 0){
            c2 += 1;
        }else{
            c3 += 1;
        }
    }
    printf("%.6f\n", c1 / (n + 0.0));
    printf("%.6f\n", c2 / (n + 0.0));
    printf("%.6f\n", c3 / (n + 0.0));
    return 0;
}
