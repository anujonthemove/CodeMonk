/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id service-lane
 * @problem_address https://www.hackerrank.com/challenges/service-lane
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
    int T, n;
    cin >> n >> T;
    int *nums = new int[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    for(int t = 0; t < T; t++){
        int a, b;
        cin >> a >> b;
        int min = 1000000;
        for(int i = a; i <= b; i++){
            if(nums[i] < min){
                min = nums[i];
            }
        }
        cout << min << endl;
    }
    return 0;
}
