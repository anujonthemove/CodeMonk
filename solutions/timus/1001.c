/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1001
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1001
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    double num;
    double nums[1000000];
    int count = 0;
    while(scanf("%lf", &num) != EOF){
        nums[count++] = sqrt(num);
    }
    for(int i = count - 1; i >= 0; i--){
        printf("%.4lf\n", nums[i]);
    }
    return 0;
}
