/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1313
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1313
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
    int **nums = (int **)malloc(n * sizeof(int *));
    for(int i = 0; i < n; i++){
        nums[i] = (int *)malloc(n * sizeof(int));
        for(int j = 0; j < n; j++){
            scanf("%d", &nums[i][j]);
        }
    }
    int *res = (int *)malloc(n * n * sizeof(int));
    int pos = 0;
    for(int i = 0; i < n; i++){
        for(int k = 0; k <= i; k++){
            res[pos++] = nums[i - k][k];
        }
    }
    for(int j = 1; j < n; j++){
        for(int k = 0; k < n - j; k++){
            res[pos++] = nums[n - 1 - k][j + k];
        }
    }
    for(int i = 0; i < n * n; i++){
        printf("%d%s", res[i], i == n * n - 1 ? "\n" : " ");
    }
    return 0;
}
