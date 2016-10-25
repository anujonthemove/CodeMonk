/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1263
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1263
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n, m;
    scanf("%d %d", &n, &m);
    int *nums = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        nums[i] = 0;
    }
    for(int i = 0; i < m; i++){
        int num;
        scanf("%d", &num);
        nums[num - 1] += 1;
    }
    for(int i = 0; i < n; i++){
        printf("%.2f%%\n", (nums[i] + 0.0) / (m + 0.0) * 100.0);
    }
    return 0;
}
