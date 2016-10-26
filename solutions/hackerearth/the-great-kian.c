/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id the-great-kian
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-great-kian/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    long long res[3] = {0, 0, 0};
    for(int i = 0; i < n; i++){
        long long num;
        scanf("%lld", &num);
        res[i % 3] += num;
    }
    for(int i = 0; i < 3; i++){
        printf("%lld%s", res[i], i < 3 - 1 ? " " : "\n");
    }
    return 0;
}
