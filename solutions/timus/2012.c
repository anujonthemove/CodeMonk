/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 2012
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=2012
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int f;
    scanf("%d", &f);
    int total = 12;
    if(f + (5 - 1) * 60 / 45 >= 12){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
