/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id the-psychic-type
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-psychic-type/
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
    for(int i = 1; i <= n; i++){
        scanf("%d", &nums[i]);
    }
    int s, e;
    scanf("%d %d", &s, &e);
    int t = s;
    bool res = false;
    int count = 0;
    while(t != e){
        t = nums[t];
        count += 1;
        if(count >= n){
            break;
        }
    }
    if(t == e){
        res = true;
    }
    printf("%s\n", res ? "Yes" : "No");
    free(nums);
    return 0;
}
