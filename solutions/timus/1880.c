/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1880
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1880
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Player{
    int *values;
    int count;
}Player;

int find(int *nums, int start, int end, int target){
    if(start > end){
        return 0;
    }
    int middle = (end - start) / 2 + start;
    if(nums[middle] == target){
        return 1;
    }else if(nums[middle] > target){
        return find(nums, start, middle - 1, target);
    }else{
        return find(nums, middle + 1, end, target);
    }
}

int cmp(const void *a, const void *b){
    return ((Player *)a)->count - ((Player *)b)->count;
}

int main(int argc, char *argv[]){
    Player team[3];
    for(int i = 0; i < 3; i++){
        scanf("%d\n", &team[i].count);
        team[i].values = (int *)malloc(team[i].count * sizeof(int));
        for(int j = 0; j < team[i].count; j++){
            scanf("%d", &(team[i].values[j]));
        }
    }
    qsort(team, 3, sizeof(Player), cmp);
    int res = 0;
    for(int i = 0; i < team[0].count; i++){
        int value = team[0].values[i];
        if(find(team[1].values, 0, team[1].count - 1, value) &&
            find(team[2].values, 0, team[2].count - 1, value)){
                res++;
            }
    }
    printf("%d\n", res);
    return 0;
}
