/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1567
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1567
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    char table[][20] = {"adgjmpsvy._", "behknqtwz,", "cfiloruxz!"};
    char line[1002];
    fgets(line, 1002, stdin);
    int n = strlen(line), res = 0;
    if(line[n - 1] == '\n'){
        line[n - 1] = '\0';
    }
    n = strlen(line);
    for(int i = 0; i < n; i++){
        char ch = line[i];
        if(ch == ' '){
            res += 1;
            continue;
        }
        for(int k = 0; k < 3; k++){
            if(strchr(table[k], ch)){
                res += k + 1;
                break;
            }
        }
    }
    printf("%d\n", res);
    return 0;
}
