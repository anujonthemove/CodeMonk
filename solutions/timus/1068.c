/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1068
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1068
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n, res;
    scanf("%d", &n);
    if(n == 0){
        res = 1;
    }else if(n > 0){
        res = n * (n + 1) / 2;
    }else{
        n = -n;
        res = 1 - n * (n + 1) / 2;
    }
    printf("%d\n", res);
    return 0;
}
