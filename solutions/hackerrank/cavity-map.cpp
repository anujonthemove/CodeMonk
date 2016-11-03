/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id cavity-map
 * @problem_address https://www.hackerrank.com/challenges/cavity-map
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
    string *mat = new string[n];
    for(int i = 0; i < n; i++){
        getline(cin, mat[i]);
    }
    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < n - 1; j++){
            int n = mat[i][j] - '0';
            char a = mat[i - 1][j], b = mat[i + 1][j], c = mat[i][j - 1], d = mat[i][j + 1];
            if(a == 'X' || b == 'X' || c == 'X' || d == 'X'){
                continue;
            }
            int a1 = a - '0';
            int b1 = b - '0';
            int c1 = c - '0';
            int d1 = d - '0';
            if(a1 < n && b1 < n && c1 < n && d1 < n){
                mat[i][j] = 'X';
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << mat[i] << endl;
    }
    return 0;
}
