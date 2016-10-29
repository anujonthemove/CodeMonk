/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id little-shino-and-the-tournament
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/little-shino-and-the-tournament/
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
    scanf("%d", &n);
    scanf("%d", &Q);
    int *ss = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &ss[i]);
    }
    int *ps = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        ps[i] = 0;
    }
    while(true){
        int remains = 0;
        int s, e, i, j;
        for(i = 0; i < n; i++){
            if(ss[i] > 0){
                s = i;
                remains += 1;
                for(j = i + 1; j < n; j++){
                    if(ss[j] > 0){
                        e = j;
                        remains += 1;
                        break;
                    }
                }
                if(j == n){
                    break;
                }else{
                    if(ss[s] > ss[e]){
                        ss[e] = 0;
                    }else{
                        ss[s] = 0;
                    }
                    ps[s] += 1;
                    ps[e] += 1;
                    i = e;
                }
            }
        }
        if(remains == 1){
            break;
        }
    }
    for(int q = 0; q < Q; q++){
        int p;
        scanf("%d", &p);
        printf("%d\n", ps[p - 1]);
    }
    return 0;
}
