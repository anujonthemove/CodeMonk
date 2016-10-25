/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1319
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1319
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
    }
    int num = 0;
    for(int j = n - 1; j >= 0; j--){
        for(int k = 1; k <= n - j; k++){
            nums[k - 1][j + k - 1] = ++num;
        }
    }
    for(int i = 1; i < n; i++){
        for(int k = 1; k <= n - i; k++){
            nums[i + k - 1][k - 1] = ++num;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d%s", nums[i][j], j == n - 1 ? "\n" : " ");
        }
    }
    return 0;
}
