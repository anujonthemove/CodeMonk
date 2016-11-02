/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id circular-array-rotation
 * @problem_address https://www.hackerrank.com/challenges/circular-array-rotation
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
    int n, k, Q;
    cin >> n >> k >> Q;
    int *nums = new int[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    for(int q = 0; q < Q; q++){
        int num;
        cin >> num;
        num -= k;
        num %= n;
        if(num < 0){
            num += n;
        }
        cout << nums[num] << endl;
    }
    return 0;
}
