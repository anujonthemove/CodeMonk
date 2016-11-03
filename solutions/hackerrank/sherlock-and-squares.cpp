/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id sherlock-and-squares
 * @problem_address https://www.hackerrank.com/challenges/sherlock-and-squares
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
        int a, b;
        cin >> a >> b;
        int count;
        int a1 = (int)ceil(sqrt(a));
        int b1 = (int)floor(sqrt(b));
        if(a1 > b1){
            count = 0;
        }else{
            count = b1 - a1 + 1;
        }
        cout << count << endl;
    }
    return 0;
}
