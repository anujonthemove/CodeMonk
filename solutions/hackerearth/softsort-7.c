/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id softsort-7
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/softsort-7/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

long long base = 1000000007;

int cmp(const void *a, const void *b){
    long long a1 = *(long long *)a;
    long long b1 = *(long long *)b;
    if(a1 < b1){
        return -1;
    }else if(a1 == b1){
        return 0;
    }else{
        return 1;
    }
}

int main(int argc, char *argv[]){
    long long T;
    scanf("%lld", &T);
    long long *nums = (long long *)malloc(T * sizeof(long long));
    long long *nums_to_sort = (long long *)malloc(T * sizeof(long long));
    for(long long t = 0; t < T; t++){
        long long num;
        scanf("%lld", &num);
        nums[t] = num;
        nums_to_sort[t] = num;

    }
    qsort(nums_to_sort, T, sizeof(long long), cmp);
    long long max = nums_to_sort[T - 1];
    long long *cache = (long long *)malloc((1 + max) * sizeof(long long));
    long long c = 1;
    for(long long i = 1; i <= max; i++){
        c *= i;
        c %= base;
        cache[i] = c;
    }
    for(long long t = 0; t < T; t++){
        long long res = cache[nums[t]];
        res *= 3;
        res -= 2;
        res += 5;
        res %= base;
        printf("%lld\n", res);
    }
    return 0;
}
