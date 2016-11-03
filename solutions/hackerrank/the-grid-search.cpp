/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id the-grid-search
 * @problem_address https://www.hackerrank.com/challenges/the-grid-search
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
        int R, C;
        cin >> R >> C;
        fgetc(stdin);
        string *bg_mat = new string[R];
        for(int i = 0; i < R; i++){
            getline(cin, bg_mat[i]);
        }
        int r, c;
        cin >> r >> c;
        fgetc(stdin);
        string *sm_mat = new string[r];
        for(int i = 0; i < r; i++){
            getline(cin, sm_mat[i]);
        }
        bool found = false;
        for(int i = 0; i < R; i++){
            if(R - i < r){
                break;
            }
            int pos = 0;
            while(true){
                pos = bg_mat[i].find(sm_mat[0], pos);
                if(pos == string::npos){
                    break;
                }
                bool valid = true;
                for(int i1 = i + 1; i1 < i + r; i1++){
                    if(bg_mat[i1].substr(pos, c) != sm_mat[i1 - i]){
                        valid = false;
                        break;
                    }
                }
                if(valid){
                    found = true;
                    break;
                }
                pos += 1;
            }
            if(found){
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}
