/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id longest-common-subsequence-with-permutations-allowed
 * @problem_address http://www.geeksforgeeks.org/longest-common-subsequence-with-permutations-allowed/
 **/

#include <set>
#include <map>
#include <cmath>
#include <regex>
#include <stack>
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
        int n1, n2;
        cin >> n1 >> n2;
        string word1, word2;
        cin >> word1 >> word2;
        int counts1[26] = {0}, counts2[26] = {0};
        for(int i = 0; i < n1; i++){
            counts1[word1[i] - 'a'] += 1;
        }
        for(int i = 0; i < n2; i++){
            counts2[word2[i] - 'a'] += 1;
        }
        string res;
        for(int i = 0; i < 26; i++){
            int n = min(counts1[i], counts2[i]);
            for(int j = 0; j < n; j++){
                res += ('a' + i);
            }
        }
        cout << res << endl;
    }
    return 0;
}
