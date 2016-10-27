/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id bob-and-bombs-cake-walk
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bob-and-bombs-cake-walk/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int n_bombed_before_k(int n, int k, char *words){
    int range = 2;
    for(int i = -range; i <= range; i++){
        if(i == 0){
            continue;
        }
        int t = n + i;
        if(t >= k){
            break;
        }
        if(0 <= t && t < strlen(words)){
            if(words[t] == 'B'){
                return 1;
            }
        }
    }
    return 0;
}

int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    char words[100001];
    for(int t = 0; t < T; t++){
        scanf("%s", words);
        int count = 0, n = strlen(words);
        for(int i = 0; i < n; i++){
            char now = words[i];
            if(now == 'B'){
                int range = 2;
                for(int j = -range; j <= range; j++){
                    if(j == 0){
                        continue;
                    }
                    int t = i + j;
                    if(0 <= t && t < n){
                        if(words[t] == 'W'){
                            if(!n_bombed_before_k(t, i, words)){
                                count = count + 1;
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
