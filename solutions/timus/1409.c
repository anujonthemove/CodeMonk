/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1409
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1409
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
    int n = a + b - 1;
    printf("%d %d\n", n - a, n - b);
    return 0;
}
