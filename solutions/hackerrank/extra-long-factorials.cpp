/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id extra-long-factorials
 * @problem_address https://www.hackerrank.com/challenges/extra-long-factorials
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

class BigInteger{
    public:
        vector<int> digits;
        BigInteger(int n){
            while(n > 10){
                digits.push_back(n % 10);
                n = n / 10;
            }
            digits.push_back(n);
        }
        void print(){
            for(int i = digits.size() - 1; i >= 0; i--){
                cout << digits[i];
            }
            cout << endl;
        }
        BigInteger copy(){
            BigInteger num(0);
            num.digits = digits;
            return num;
        }
        void multi10(){
            digits.insert(digits.begin(), 0);
        }
        void add(BigInteger num){
            int m = digits.size();
            int n = num.digits.size(), addon = 0, i = 0;
            while(i < m && i < n){
                int digit = digits[i] + num.digits[i] + addon;
                addon = digit / 10;
                digit = digit % 10;
                digits[i] = digit;
                i++;
            }
            while(i < m){
                int digit = digits[i] + addon;
                addon = digit / 10;
                digit = digit % 10;
                digits[i] = digit;
                i++;
            }
            while(i < n){
                int digit = num.digits[i] + addon;
                addon = digit / 10;
                digit = digit % 10;
                digits.push_back(digit);
                i++;
            }
            if(addon){
                digits.push_back(addon);
            }
        }
        void multiDigit(int d){
            int addon = 0;
            for(int i = 0; i < digits.size(); i++){
                int digit = digits[i] * d + addon;
                addon = digit / 10;
                digit = digit % 10;
                digits[i] = digit;
            }
            if(addon){
                digits.push_back(addon);
            }
        }
        void multi(BigInteger num){
            BigInteger res(0);
            for(int i = 0; i < num.digits.size(); i++){
                int d = num.digits[i];
                BigInteger tmp = this->copy();
                for(int j = 0; j < i; j++){
                    tmp.multi(10);
                }
                tmp.multiDigit(d);
                res.add(tmp);
            }
            digits = res.digits;
        }
};

int main(){
    int n;
    cin >> n;
    BigInteger num1(1);
    for(int i = 1; i <= n; i++){
        BigInteger num2(i);
        num1.multi(num2);
    }
    num1.print();
    return 0;
}
