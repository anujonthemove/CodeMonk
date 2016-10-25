/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1581
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1581
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
    int *nums = (int *)malloc((n + 1) * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    nums[n] = -1;
    int pre = -1, now, count = 0, printed = 0;
    for(int i = 0; i <= n; i++){
        now = nums[i];
        if(now != pre){
            if(pre > 0){
                if(printed){
                    printf(" ");
                }
                printf("%d %d", count, pre);
                printed = 1;
            }
            pre = now;
            count = 1;
        }else{
            count += 1;
        }
    }
    printf("\n");
    return 0;
}
