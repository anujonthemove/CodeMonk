/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id breakup-app
 * @problem_address https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/breakup-app/
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
    fgetc(stdin);
    map<int, int> scores;
    for(int i = 0; i < n; i++){
        string line;
        getline(cin, line);
        bool girl = line.find("G:") == 0;
        int factor = girl ? 2 : 1;
        line += " ";
        int a = -1, b;
        for(int j = 0; j < line.size(); j++){
            char ch = line[j];
            if('0' <= ch && ch <= '9'){
                if(a >= 0){
                }else{
                    a = j;
                }
            }else{
                if(a >= 0){
                    b = j;
                    int num = stoi(line.substr(a, b - a));
                    if(scores.find(num) != scores.end()){
                        scores[num] += factor;
                    }else{
                        scores[num] = factor;
                    }
                }
                a = -1;
            }
        }
    }
    map<int, int>::iterator it;
    int max_k = 0, max_v = 0;
    for(it = scores.begin(); it != scores.end(); it++){
        int k = it->first;
        int v = it->second;
        if(v > max_v){
            max_v = v;
            max_k = k;
        }
    }
    cout << ((max_k == 19 || max_k == 20) ? "Date" : "No Date") << endl;
    return 0;
}
