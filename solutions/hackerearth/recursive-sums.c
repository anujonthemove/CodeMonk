/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id recursive-sums
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/recursive-sums/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int sum(unsigned long long n){
    int res = 0;
    while(n > 0){
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        int N;
        scanf("%d", &N);
        unsigned long long n1 = 0, n2 = 0, base = 10000000000;
        for(int i = 1; i <= N; i++){
            unsigned long long a, b;
            scanf("%llu %llu", &a, &b);
            unsigned long long p = a * b;
            n1 += p / base;
            n2 += p % base;
        }
        n1 += n2 / base;
        n2 %= base;
        int s = sum(n1) + sum(n2);
        while(s >= 10){
            s = sum(s);
        }
        printf("%llu\n", s);
    }
    return 0;
}
