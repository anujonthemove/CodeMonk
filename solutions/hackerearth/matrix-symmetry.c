/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id matrix-symmetry
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/matrix-symmetry/
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
        char **matrix = (char **)malloc(n * sizeof(char *));
        for(int i = 0; i < n; i++){
            matrix[i] = (char *)malloc((n + 1) * sizeof(char));
            scanf("%s", matrix[i]);
        }
        bool h = true, v = true;
        for(int i = 0; i < n / 2; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] != matrix[n - 1 - i][j]){
                    h = false;
                    break;
                }
            }
            if(!h){
                break;
            }
        }
        for(int j = 0; j < n / 2; j++){
            for(int i = 0; i < n; i++){
                if(matrix[i][j] != matrix[i][n - 1 - j]){
                    v = false;
                    break;
                }
            }
            if(!v){
                break;
            }
        }
        char *res = "";
        if(h && v){
            res = "BOTH";
        }else if(h){
            res = "HORIZONTAL";
        }else if(v){
            res = "VERTICAL";
        }else{
            res = "NO";
        }
        printf("%s\n", res);
    }
    return 0;
}
