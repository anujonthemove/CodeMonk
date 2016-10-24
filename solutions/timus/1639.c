/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1639
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1639
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int m, n;
    scanf("%d %d", &m, &n);
    if((m * n - 1) % 2 == 0){
        printf("[second]=:]\n");
    }else{
        printf("[:=[first]\n");
    }
    return 0;
}
