/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id monk-being-monitor
 * @problem_address https://www.hackerearth.com/codemonk-sorting/algorithm/monk-being-monitor/
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
        int min = 100001, max = 0;
        int pre = -1, c = 0;
        for(int i = 0; i < n; i++){
            int num = nums[i];
            if(pre == -1){
                c = 1;
                pre = num;
                continue;
            }
            if(pre == num){
                c += 1;
            }else{
                if(c > max){
                    max = c;
                }
                if(c < min){
                    min = c;
                }
                c = 1;
            }
            pre = num;
        }
        if(c > max){
            max = c;
        }
        if(c < min){
            min = c;
        }
        int d = max - min;
        printf("%d\n", d > 0 ? d : -1);
    }
    return 0;
}
