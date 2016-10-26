/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id find-product
 * @problem_address https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    long d = 1000000007;
    long res = 1;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        long num;
        scanf("%ld", &num);
        res = (res * (num % d)) % d;
    }
    printf("%ld\n", res);
    return 0;
}
