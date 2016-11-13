/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-operators
 * @problem_address https://www.hackerrank.com/challenges/30-operators
 **/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <map>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    double cost;
    int tip, tax;
    cin >> cost >> tip >> tax;
    cout << "The total meal cost is "
         << (int)round(cost * (100 + tip + tax) / 100.0) << " dollars." << endl;
    return 0;
}
