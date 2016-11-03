/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id kaprekar-numbers
 * @problem_address https://www.hackerrank.com/challenges/kaprekar-numbers
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

bool isKep(int num){
    long long squared = (long long)num * (long long)num;
    stringstream ss;
    ss << squared;
    string s = ss.str();
    int half = s.size() / 2;
    string part1 = s.substr(0, half), part2 = s.substr(half);
    if(part1.size() <= 0){
        part1 = "0";
    }
    if(part2.size() <= 0){
        part2 = "0";
    }
    int n1 = stoi(part1), n2 = stoi(part2);
    return (n1 + n2) == num;
}

int main(){
    int a, b;
    cin >> a >> b;
    bool hasKep = false;
    for(int i = a; i <= b; i++){
        if(isKep(i)){
            cout << i << " ";
            hasKep = true;
        }
    }
    if(!hasKep){
        cout << "INVALID RANGE" << endl;
    }
    return 0;
}
