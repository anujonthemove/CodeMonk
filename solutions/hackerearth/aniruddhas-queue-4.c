/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id aniruddhas-queue-4
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/aniruddhas-queue-4/
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
    for(int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        unsigned long long *nums = (unsigned long long *)malloc(n * sizeof(unsigned long long));
        unsigned long long total = 0;
        for(int i = 0; i < n; i++){
            scanf("%llu", &nums[i]);
            total += nums[i];
        }
        unsigned long long m;
        scanf("%llu", &m);
        unsigned long long r = nums[0];
        int i = 0;
        while(m > r){
            m -= r;
            i += 1;
            if(i == n){
                if(m % total == 0){
                    m = total;
                }else{
                    m %= total;
                }
            }
            i %= n;
            r = nums[i];
        }
        printf("%d\n", i + 1);
    }
    return 0;
}
