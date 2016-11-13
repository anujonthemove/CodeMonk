/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-generics
 * @problem_address https://www.hackerrank.com/challenges/30-generics
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

template <class T> void printArray(vector<T> array) {
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << endl;
    }
}

int main(int argc, char *argv[]) {
    vector<int> vInt{1, 2, 3};
    vector<string> vString{"Hello", "World"};

    printArray<int>(vInt);
    printArray<string>(vString);

    return 0;
}
