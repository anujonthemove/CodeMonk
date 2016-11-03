/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id find-digits
 * @problem_address https://www.hackerrank.com/challenges/find-digits
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
        long long num;
        cin >> num;
        if(num == 0){
            cout << 0 << endl;
            continue;
        }
        long long remains = num;
        int count = 0;
        while(remains > 0){
            int digit = remains % 10;
            if(digit != 0){
                if(num % digit == 0){
                    count += 1;
                }
            }
            remains /= 10;
        }
        cout << count << endl;
    }
    return 0;
}
