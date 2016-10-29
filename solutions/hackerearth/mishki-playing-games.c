/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id mishki-playing-games
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/mishki-playing-games/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n, Q;
    scanf("%d %d", &n, &Q);
    int *nums = (int *)malloc((n + 1) * sizeof(int));
    nums[0] = 0;
    for(int i = 1; i <= n; i++){
        int num;
        scanf("%d", &num);
        nums[i] = ((int)floor(log(num) / log(2)) + 1 + nums[i - 1]) % 2;
    }
    for(int q = 0; q < Q; q++){
        int a, b;
        scanf("%d %d", &a, &b);
        int res = nums[b] - nums[a - 1];
        printf("%s\n", res % 2 != 0 ? "Mishki" : "Hacker");
    }
    return 0;
}
