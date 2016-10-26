/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id power-of-two-4
 * @problem_address https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/power-of-two-4/
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
    long long *nums = (long long *)malloc(200 * sizeof(long long));
    for(int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%lld", &nums[i]);
        }
        int found = 0;
        for(int pos = 0; pos <= 32; pos++){
            long long res = -1;
            for(int i = 0; i < n; i++){
                if((nums[i] >> pos) % 2 == 1){
                    if(res == -1){
                        res = nums[i];
                    }else{
                        res = res & nums[i];
                    }
                }
            }
            if(res > 0){
                long long tmp = 1;
                for(int i = 0; i < pos; i++){
                    tmp = tmp * 2;
                }
                if(res == tmp){
                    found = 1;
                    break;
                }
            }
        }
        printf("%s\n", found ? "YES" : "NO");
    }
    free(nums);
    return 0;
}
