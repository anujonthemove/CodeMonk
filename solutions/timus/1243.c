/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1243
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1243
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    char *nums = (char *)malloc((502) * sizeof(char));
    fgets(nums, 502, stdin);
    int n = strlen(nums);
    if(nums[n - 1] == '\n'){
        nums[n - 1] = '\0';
    }
    n = strlen(nums);
    int r = 0;
    for(int i = 0; i < n; i++){
        int d = nums[i] - '0';
        r = (10 * r + d) % 7;
    }
    printf("%d\n", r);
    return 0;
}
