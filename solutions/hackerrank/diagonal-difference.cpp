/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id diagonal-difference
 * @problem_address https://www.hackerrank.com/challenges/diagonal-difference
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
    int **nums = new int*[n];
    int c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++){
        nums[i] = new int[n];
        for(int j = 0; j < n; j++){
            cin >> nums[i][j];
            if(i == j){
                c1 += nums[i][j];
            }
            if(i + j == n - 1){
                c2 += nums[i][j];
            }
        }
    }
    int c = c1 >= c2 ? c1 - c2 : c2 - c1;
    printf("%d\n", c);
    return 0;
}
