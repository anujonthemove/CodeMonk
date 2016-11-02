/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id compare-the-triplets
 * @problem_address https://www.hackerrank.com/challenges/compare-the-triplets
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
    int alice[3], bob[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &alice[i]);
    }
    for(int i = 0; i < 3; i++){
        scanf("%d", &bob[i]);
    }
    int s1 = 0, s2 = 0;
    for(int i = 0; i < 3; i++){
        if(alice[i] > bob[i]){
            s1 += 1;
        }else if(alice[i] < bob[i]){
            s2 += 1;
        }
    }
    cout << s1 << " " << s2 << endl;
    return 0;
}
