/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id save-patients
 * @problem_address https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/
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
    int n;
    scanf("%d", &n);
    int *vs = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &vs[i]);
    }
    int *ps = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &ps[i]);
    }
    qsort(vs, n, sizeof(int), cmp);
    qsort(ps, n, sizeof(int), cmp);
    bool can = true;
    for(int i = 0; i < n; i++){
        if(vs[i] < ps[i]){
            can = false;
            break;
        }
    }
    printf("%s\n", can ? "Yes" : "No");
    return 0;
}
