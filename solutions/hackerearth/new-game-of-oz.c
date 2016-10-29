/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id new-game-of-oz
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/new-game-of-oz/
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
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        int *nums = (int *)malloc(n * sizeof(int));
        for(int i = 0; i < n; i++){
            scanf("%d", &nums[i]);
        }
        qsort(nums, n, sizeof(int), cmp);
        int pre = 0, now, count = 0, streak = 0;
        for(int i = 0; i < n; i++){
            now = nums[i];
            if(now == pre){
                continue;
            }
            if(pre == 0){
                streak = 1;
            }else{
                if(now + 1 == pre || now - 1 == pre){
                    streak += 1;
                }else{
                    count += (int)ceil(streak / 2.0);
                    streak = 1;
                }
            }
            pre = now;
        }
        count += (int)ceil(streak / 2.0);
        printf("%d\n", count);
    }
    return 0;
}
