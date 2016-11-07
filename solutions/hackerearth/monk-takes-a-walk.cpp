/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id monk-takes-a-walk
 * @problem_address https://www.hackerearth.com/codemonk-searching/algorithm/monk-takes-a-walk/
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
    fgetc(stdin);
    string vowels = "aeiouAEIOU";
    for(int t = 0; t < T; t++){
        string line;
        getline(cin, line);
        int n = 0;
        for(int i = 0; i < line.length(); i++){
            if(vowels.find(line[i]) != string::npos){
                n++;
            }
        }
        cout << n << endl;
    }
    return 0;
}
