/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id very-cool-numbers
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/very-cool-numbers/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int cool(int n){
    int ds[32] = {0};
    int count = 0;
    while(n > 0){
        ds[count++] = n % 2;
        n /= 2;
    }
    int res = 0;
    for(int i = count - 1; i >= 0; i--){
        if(ds[i] == 1){
            if(i - 1 >= 0 && i - 2 >= 0 && ds[i - 1] == 0 && ds[i - 2] == 1){
                res += 1;
            }
        }
    }
    return res;
}

int main(int argc, char *argv[]){
    int cools[100001];
    for(int i = 1; i <= 100000; i++){
        cools[i] = cool(i);
    }
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        int r, k;
        scanf("%d %d", &r, &k);
        int res = 0;
        for(int i = 1; i <= r; i++){
            if(cools[i] >= k){
                res += 1;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
