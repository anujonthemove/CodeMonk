/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id inverse-list
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/inverse-list/
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
        int *nums1 = (int *)malloc(n * sizeof(int));
        int *nums2 = (int *)malloc(n * sizeof(int));
        for(int i = 0; i < n; i++){
            scanf("%d", &nums1[i]);
        }
        for(int i = 0; i < n; i++){
            nums2[nums1[i] - 1] = i + 1;
        }
        bool inverse = true;
        for(int i = 0; i < n; i++){
            if(nums1[i] != nums2[i]){
                inverse = false;
                break;
            }
        }
        printf("%s\n", inverse ? "inverse" : "not inverse");
    }
    return 0;
}
