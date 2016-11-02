/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id time-conversion
 * @problem_address https://www.hackerrank.com/challenges/time-conversion
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
    string time;
    cin >> time;
    string head = time.substr(0, 2);
    time = time.substr(2);
    string tail = time.substr(time.size() - 2);
    time = time.substr(0, time.size() - 2);
    int hour = stoi(head) % 12;
    if(tail != "AM"){
        hour += 12;
    }
    if(hour < 10){
        cout << "0";
    }
    cout << hour << time << endl;
    return 0;
}
