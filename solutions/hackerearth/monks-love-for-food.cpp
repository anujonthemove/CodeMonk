/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id monks-love-for-food
 * @problem_address https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monks-love-for-food/
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
    int Q;
    cin >> Q;
    stack<int> food;
    for(int q = 0; q < Q; q++){
        int op, num;
        cin >> op;
        if(op == 1){
            if(food.size() <= 0){
                cout << "No Food" << endl;
            }else{
                cout << food.top() << endl;
                food.pop();
            }
        }else{
            cin >> num;
            food.push(num);
        }
    }
    return 0;
}
