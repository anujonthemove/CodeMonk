/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id palindromic-numbers-7
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/palindromic-numbers-7/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int reverse(int n){
    if(n == 0){
        return 0;
    }
    int res = 0;
    while(n > 0){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

bool is_palin(int n){
    return reverse(n) == n;
}

int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        int a, b;
        scanf("%d %d", &a, &b);
        int count = 0;
        for(int n = a; n <= b; n++){
            if(is_palin(n)){
                count += 1;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
