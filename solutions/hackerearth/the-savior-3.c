/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id the-savior-3
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-savior-3/
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
        int *nums1 = (int *)malloc(n * sizeof(int));
        int *nums2 = (int *)malloc(n * sizeof(int));
        int i1 = 0, i2 = 0;
        for(int i = 0; i < n; i++){
            int num;
            scanf("%d", &num);
            if(num % 2 != 0){
                nums1[i1++] = num;
            }else{
                nums2[i2++] = num;
            }
        }
        qsort(nums1, i1, sizeof(int), cmp);
        qsort(nums2, i2, sizeof(int), cmp);
        int pre = -1, now;
        int r1 = i1 * (i1 - 1) / 2;
        int r2 = i2 * (i2 - 1) / 2;
        int n1 = 0, n2 = 0;
        for(int i = 0; i < i1; i++){
            now = nums1[i];
            if(now == pre){
                n1 += 1;
            }else{
                r1 -= (n1 * (n1 - 1) / 2);
                n1 = 1;
            }
            pre = now;
        }
        r1 -= (n1 * (n1 - 1) / 2);
        pre = -1;
        for(int i = 0; i < i2; i++){
            now = nums2[i];
            if(now == pre){
                n2 += 1;
            }else{
                r2 -= (n2 * (n2 - 1) / 2);
                n2 = 1;
            }
            pre = now;
        }
        r2 -= (n2 * (n2 - 1) / 2);
        printf("%d\n", r1 + r2);
    }
    return 0;
}
