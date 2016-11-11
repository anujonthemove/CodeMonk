/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge geeksforgeeks
 * @problem_id string-with-additive-sequence
 * @problem_address http://www.geeksforgeeks.org/string-with-additive-sequence/
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

string add(string first, string second){
    reverse(first.begin(), first.end());
    reverse(second.begin(), second.end());
    int i = 0, n = min(first.length(), second.length()), carry = 0;
    string res;
    for(i = 0; i < n; i++){
        int d1 = first[i] - '0';
        int d2 = second[i] - '0';
        int d = d1 + d2 + carry;
        carry = d / 10;
        d %= 10;
        res += (d + '0');
    }
    string longer = first.length() > second.length() ? first : second;
    while(i <= longer.length() - 1){
        int d = longer[i] - '0';
        d += carry;
        carry = d / 10;
        d %= 10;
        res += (d + '0');
        i++;
    }
    if(carry > 0){
        res += (carry + '0');
    }
    reverse(res.begin(), res.end());
    return res;
}

bool additive(string first, string second, string remains){
    string expected = add(first, second);
    if(expected == remains){
        return true;
    }
    if(remains.find(expected) == 0){
        return additive(second, expected, remains.substr(expected.length()));
    }
    return false;
}

int main(int argc, char *argv[]){
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        string word;
        cin >> word;
        bool isAdditive = false;
        int n = word.length();
        for(int i = 1; i <= n / 2; i++){
            if(word[0] == '0'){
                if(i > 1){
                    break;
                }
            }
            string first = word.substr(0, i);
            for(int j = 1; j <= (n - i) / 2; j++){
                if(word[i] == '0'){
                    if(j > 1){
                        break;
                    }
                }
                string second = word.substr(i, j);
                string remains = word.substr(i + j);
                if(additive(first, second, remains)){
                    isAdditive = true;
                    break;
                }
            }
        }
        cout << (isAdditive ? 1 : 0) << endl;
    }
    return 0;
}
