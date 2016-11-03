/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id manasa-and-stones
 * @problem_address https://www.hackerrank.com/challenges/manasa-and-stones
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
        int n, a, b;
        cin >> n >> a >> b;
        set<int> stones;
        stones.insert(0);
        for(int i = 2; i <= n; i++){
            set<int> tmp;
            set<int>::iterator it;
            for(it = stones.begin(); it != stones.end(); it++){
                tmp.insert(*it + a);
                tmp.insert(*it + b);
            }
            stones = tmp;
        }
        set<int>::iterator it;
        for(it = stones.begin(); it != stones.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
