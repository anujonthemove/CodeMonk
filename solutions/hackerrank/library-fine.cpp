/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id library-fine
 * @problem_address https://www.hackerrank.com/challenges/library-fine
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

bool is_leap(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            }
        }else{
            return true;
        }
    }
    return false;
}

int days_for_month_year(int month, int year){
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 2:
            return is_leap(year) ? 29 : 28;
        default:
            return 30;
    }
}

int main(int argc, char *argv[]){
    int d1, m1, y1, d, m, y;
    cin >> d1 >> m1 >> y1 >> d >> m >> y;
    int res = 0;
    if(y1 < y){
    }else if(y1 == y){
        if(m1 < m){
        }else if(m1 == m){
            if(d1 <= d){
            }else{
                res = 15 * (d1 - d);
            }
        }else{
            res = 500 * (m1 - m);
        }
    }else{
        res = 10000;
    }
    cout << res << endl;
    return 0;
}
