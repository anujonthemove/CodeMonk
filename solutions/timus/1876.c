/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1876
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1876
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
    scanf("%d %d", &a, &b);
    int r1 = 2 * b + 40;
    int r2 = 2 * a + 39;
    printf("%d\n", r1 > r2 ? r1 : r2);
    return 0;
}
