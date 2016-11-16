/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id classes-objects
 * @problem_address https://www.hackerrank.com/challenges/classes-objects
 **/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class Student {
  private:
    int nums[5];

  public:
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> nums[i];
        }
    }
    int calculateTotalScore() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += nums[i];
        }
        return sum;
    }
};

int main(int argc, char *argv[]) {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    // print result
    cout << count;
    return 0;
}
