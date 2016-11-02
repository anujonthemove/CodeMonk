/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id hibina-3
 * @problem_address https://www.hackerearth.com/november-easy-16/algorithm/hibina-3/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    char colors[5][20];
    int colorsNum = 0;
    int counts[5] = {0, 0, 0, 0, 0};
    if(T == 0){
        for(int i = 0; i < 5; i++){
            counts[i] = 1;
        }
    }
    for(int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        char color[20];
        scanf("%s", color);
        bool seen = false;
        for(int i = 0; i < colorsNum; i++){
            if(strcmp(colors[i], color) == 0){
                seen = true;
                break;
            }
        }
        int nums[5];
        for(int i = 0; i < n; i++){
            scanf("%d", &nums[i]);
        }
        if(seen){
            continue;
        }else{
            strcpy(colors[colorsNum++], color);
        }
        for(int i = 0; i < 5; i++){
            bool seen = false;
            for(int j = 0; j < n; j++){
                if(nums[j] == i + 1){
                    seen = true;
                    break;
                }
            }
            if(seen){
                counts[i] += 1;
            }else{
                counts[i] -= 1;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        if(counts[i] <= 0){
            printf("NO\n");
        }else if(counts[i] == 1){
            printf("UNDEFINED\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}
