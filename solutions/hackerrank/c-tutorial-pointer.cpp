/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id c-tutorial-pointer
 * @problem_address https://www.hackerrank.com/challenges/c-tutorial-pointer
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

void update(int *a, int *b) {
    *a = *a + *b;
    *b = *a - 2 * *b;
    if (*b < 0) {
        *b = -*b;
    }
}

int main(int argc, char *argv[]) {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}
