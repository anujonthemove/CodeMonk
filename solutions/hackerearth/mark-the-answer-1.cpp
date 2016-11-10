/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id mark-the-answer-1
 * @problem_address https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/mark-the-answer-1/
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
    int n, c;
    cin >> n >> c;
    int res = 0;
    int life = 1;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num > c){
            if(life <= 0){
                break;
            }
            life--;
        }else{
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
