/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1820
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1820
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n, k;
    scanf("%d %d", &n, &k);
    if(n <= k){
        printf("2\n");
        return 0;
    }
    int res = 2 * n / k;
    if(2 * n % k != 0){
        res++;
    }
    printf("%d\n", res);
    return 0;
}
