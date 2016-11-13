/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-data-types
 * @problem_address https://www.hackerrank.com/challenges/30-data-types
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
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i1;
    double d1;
    string s1;

    // Read and save an integer, double, and String to your variables.
    cin >> i1 >> d1;
    cin.ignore();
    getline(cin, s1);

    // Print the sum of both integer variables on a new line.
    cout << (i + i1) << endl;

    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + d1);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << (s + s1) << endl;

    return 0;
}
