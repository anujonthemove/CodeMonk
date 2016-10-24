/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1924
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1924
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int sum;
    if(n % 2 == 0){
        sum = n / 2;
    }else{
        sum = n - n / 2;
    }
    if(sum % 2 == 0){
        printf("black\n");
    }else{
        printf("grimy\n");
    }
    return 0;
}
