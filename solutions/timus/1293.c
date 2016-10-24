/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1293
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1293
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    printf("%d\n", n * 2 * a * b);
    return 0;
}
