/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge codeeval
 * @problem_id 1
 * @problem_address https://www.codeeval.com/open_challenges/1/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    char line[100];
    FILE *file = fopen(argv[1], "r");
    while(fgets(line, 100, file) != NULL){
        int a, b, n;
        sscanf(line, "%d %d %d", &a, &b, &n);
        for(int i = 1; i <= n; i++){
            if(i % a == 0){
                printf("F");
            }
            if(i % b == 0){
                printf("B");
            }
            if(i % a != 0 && i % b != 0){
                printf("%d", i);
            }
            if(i < n){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }
    return 0;
}
