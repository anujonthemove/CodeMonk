/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1877
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1877
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a % 2 == 0 || b % 2 != 0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}
