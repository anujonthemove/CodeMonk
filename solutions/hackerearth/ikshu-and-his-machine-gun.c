/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id ikshu-and-his-machine-gun
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ikshu-and-his-machine-gun/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int cmp(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int *nums = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    qsort(nums, n, sizeof(int), cmp);
    for(int i = 0; i < n; i++){
        int num = nums[i];
        printf("%d%s", num - i, i == n - 1 ? "\n" : " ");
    }
    return 0;
}
