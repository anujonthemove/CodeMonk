/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id chess-tournament-4
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/chess-tournament-4/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int N;
    scanf("%d", &N);
    int n = 1 << N;
    long total = (long)n * (n - 1) / 2;
    int *table = (int *)malloc(total * sizeof(int));
    for(int i = 0; i < total; i++){
        scanf("%d", &table[i]);
    }
    int *match = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        match[i] = 1;
    }
    for(int i = 1; i <= N; i++){
        int a = -1, b = -1;
        for(int j = 0; j < n; j++){
            if(match[j]){
                if(a < 0){
                    a = j + 1;
                }else if(b < 0){
                    b = j + 1;
                    long pos = (long)(b - 2) * (b - 1) / 2 + a - 1;
                    int r = table[pos];
                    if(r == 1){
                        match[a - 1] = 0;
                    }else{
                        match[b - 1] = 0;
                    }
                    a = -1;
                    b = -1;
                }
            }
        }
    }
    int res;
    for(int i = 0; i < n; i++){
        if(match[i] == 1){
            res = i + 1;
        }
    }
    printf("%d\n", res);
    free(table);
    return 0;
}
