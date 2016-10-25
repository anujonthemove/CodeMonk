/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1327
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1327
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
    int r1 = a % 2 == 0 ? a + 1 : a;
    int r2 = b % 2 == 0 ? b - 1 : b;
    int r = (r2 - r1) / 2 + 1;
    if(r < 0){
        r = 0;
    }
    printf("%d\n", r);
    return 0;
}
